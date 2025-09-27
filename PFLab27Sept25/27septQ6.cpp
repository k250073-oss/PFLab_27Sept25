// Q.6

#include <stdio.h>
#include <math.h>

int main() {
    int shape, x;
    int pi = 22/7;
    float radius, length, width, base, height, s1, s2, s3, a, p;

    printf(" Geometry Calculator \n");
    printf(" For Circle, Press 1: \n");
    printf(" For Rectangle, Press 2: \n");
    printf(" For Triangle, Press 3: \n");

    scanf("%d", &shape);

    switch(shape) {
        case 1: 
            
            printf("1. Area\n2. Perimeter (Circumference)\n");
            printf("Enter your choice: ");
            scanf("%d", &x);

            switch(x) {
                case 1:
                    printf("Enter radius: ");
                    scanf("%f", &radius);
                    a = pi * radius * radius;
                    printf("Area of the circle: %f\n", a);
                    break;

                case 2: 
                    printf("Enter radius: ");
                    scanf("%f", &radius);
                    p = 2 * pi * radius;
                    printf("Perimeter (Circumference) of the circle: %f\n", p);
                    break;

                default:
                    printf("Invalid calculation choice.\n");
            }
            break;

        case 2: 
            printf("1. Area\n2. Perimeter\n");
            printf("Enter your choice: ");
            scanf("%d", &x);

            switch(x) {
                case 1:
                    printf("Enter length and width: ");
                    scanf("%f %f", &length, &width);
                    a = length * width;
                    printf("Area of the rectangle: %f\n", a);
                    break;

                case 2: 
                    printf("Enter length and width: ");
                    scanf("%f %f", &length, &width);
                    p = 2 * (length + width);
                    printf("Perimeter of the rectangle: %f\n", p);
                    break;

                default:
                    printf("Invalid calculation choice.\n");
            }
            break;

        case 3: 
            printf("1. Area\n2. Perimeter\n");
            printf("Enter your choice: ");
            scanf("%d", &x);

            switch(x) {
                case 1: 
                    printf("Enter base and height: ");
                    scanf("%f %f", &base, &height);
                    a = 0.5 * base * height;
                    printf("Area of the triangle: %f\n", a);
                    break;

                case 2: 
                    printf("Enter the three sides of the triangle: ");
                    scanf("%f %f %f", &s1, &s2, &s3);
                    p = s1 + s2 + s3;
                    printf("Perimeter of the triangle: %f\n", p);
                    break;

                default:
                    printf("Invalid calculation choice.\n");
            }
            break;

        default:
            printf("Invalid shape choice.\n");
    }

    return 0;
}

