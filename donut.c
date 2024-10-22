#include <stdio.h>
#include <math.h>

#define pi 3.14159265358979323846
#define screen_width 80
#define screen_height 22

const float theta_spacing = 0.07;
const float phi_spacing   = 0.02;

const float R1 = 1;
const float R2 = 2;
const float K2 = 5;

// Calculate K1 based on screen size
const float K1 = screen_width * K2 * 3 / (8 * (R1 + R2));

void render_frame(float A, float B) {
    // Precompute sines and cosines of A and B
    float cosA = cos(A), sinA = sin(A);
    float cosB = cos(B), sinB = sin(B);

    char output[screen_width][screen_height];
    float zbuffer[screen_width][screen_height];

    // Initialize the output and z-buffer arrays
    for (int i = 0; i < screen_width; i++) {
        for (int j = 0; j < screen_height; j++) {
            output[i][j] = ' ';
            zbuffer[i][j] = 0;
        }
    }

    // Theta goes around the cross-sectional circle of a torus
    for (float theta = 0; theta < 2 * pi; theta += theta_spacing) {
        // Precompute sines and cosines of theta
        float costheta = cos(theta), sintheta = sin(theta);

        // Phi goes around the center of revolution of a torus
        for (float phi = 0; phi < 2 * pi; phi += phi_spacing) {
            // Precompute sines and cosines of phi
            float cosphi = cos(phi), sinphi = sin(phi);

            // The x, y coordinate of the circle, before revolving (factored out of the above equations)
            float circlex = R2 + R1 * costheta;
            float circley = R1 * sintheta;

            // Final 3D (x, y, z) coordinate after rotations, directly from our math above
            float x = circlex * (cosB * cosphi + sinA * sinB * sinphi) - circley * cosA * sinB;
            float y = circlex * (sinB * cosphi - sinA * cosB * sinphi) + circley * cosA * cosB;
            float z = K2 + cosA * circlex * sinphi + circley * sinA;
            float ooz = 1 / z;  // "one over z"

            // x and y projection. Note that y is negated here, because y goes up in 3D space but down on 2D displays.
            int xp = (int)(screen_width / 2 + K1 * ooz * x);
            int yp = (int)(screen_height / 2 - K1 * ooz * y);

            // Calculate luminance. Ugly, but correct.
            float L = cosphi * costheta * sinB - cosA * costheta * sinphi - sinA * sintheta + cosB * (cosA * sintheta - costheta * sinA * sinphi);

            // L ranges from -sqrt(2) to +sqrt(2). If it's < 0, the surface is pointing away from us, so we won't bother trying to plot it.
            if (L > 0) {
                // Test against the z-buffer. Larger 1/z means the pixel is closer to the viewer than what's already plotted.
                if (ooz > zbuffer[xp][yp]) {
                    zbuffer[xp][yp] = ooz;
                    int luminance_index = L * 8;
                    // Luminance_index is now in the range 0..11 (8*sqrt(2) = 11.3)
                    // Now we lookup the character corresponding to the luminance and plot it in our output:
                    if (luminance_index < 0) luminance_index = 0;
                    if (luminance_index > 11) luminance_index = 11;
                    output[xp][yp] = ".,-~:;=!*#$@"[luminance_index];
                }
            }
        }
    }

    // Now, dump output[] to the screen.
    // Bring cursor to "home" location, in just about any currently-used terminal emulation mode
    printf("\x1b[H");
    for (int j = 0; j < screen_height; j++) {
        for (int i = 0; i < screen_width; i++) {
            putchar(output[i][j]);
        }
        putchar('\n');
    }
}

int main() {
    float A = 0, B = 0;  // Initialize angles A and B
    for (;;) {
        render_frame(A, B);
        A += 0.04;
        B += 0.02;
    }
    return 0;
}
