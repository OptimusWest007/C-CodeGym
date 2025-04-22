#include <stdio.h>
#include <math.h>

// Declare functions for area
void area_square();
void area_circle();
void area_rectangle();
void area_triangle();

// Declare functions for perimeter
void perimeter_square();
void perimeter_circle();
void perimeter_rectangle();
void perimeter_triangle();

// Declare input variables for dimensions
int shape_num;
float length;
float width;
float base_length;
int operation_num;
float area;
float perimeter;
float radius;
float height;

int main() {
    printf("Enter the shape number that you want to use: \n 1 for Square \n 2 for Circle \n 3 for Rectangle \n 4 for Triangle \n");  // Ask the user for the shape number
    
    scanf("%d", &shape_num);
    switch (shape_num) {
        case 1:
            printf("Enter the length: \n");
            scanf("%f", &length);
            break;

        case 2:
            printf("Enter the radius: \n");
            scanf("%f", &radius);
            break;

        case 3:
            printf("Enter the length: \n");
            scanf("%f", &length);
            printf("Enter the width: \n");
            scanf("%f", &width);
            break;

        case 4:
            printf("Enter the base length: \n");
            scanf("%f", &base_length);
            printf("Enter the height length: (enter random number if not applicable in desired operation) \n");
            scanf("%f", &height);
            break;

        default:
            printf("Invalid input! \n");
    }

    printf("Enter the operation number you want to perform e.g. \n 1 for area \n 2 for Perimeter \n"); // Ask the user for the operation number to be performed
    scanf("%d", &operation_num);

    if (shape_num == 1) {
        switch (operation_num) {
            case 1:
                area_square();
                printf("Your area is %.2f \n", area);
                break;

            case 2:
                perimeter_square();
                printf("Your perimeter is %.2f \n", perimeter);
                break;

            default:
                printf("Invalid input! \n");
        }
    } else if (shape_num == 2) {
        switch (operation_num) {
            case 1:
                area_circle();
                printf("Your area is %.2f \n", area);
                break;

            case 2:
                perimeter_circle();
                printf("Your perimeter is %.2f \n", perimeter);
                break;

            default:
                printf("Invalid input! \n");
        }
    } else if (shape_num == 3) {
        switch (operation_num) {
            case 1:
                area_rectangle();
                printf("Your area is %.2f \n", area);
                break;

            case 2:
                perimeter_rectangle();
                printf("Your perimeter is %.2f \n", perimeter);
                break;

            default:
                printf("Invalid input! \n");
        }
    } else if (shape_num == 4) {
        switch (operation_num) {
            case 1:
                area_triangle();
                printf("Your area is %.2f \n", area);
                break;

            case 2:
                perimeter_triangle();
                printf("Your perimeter is %.2f \n", perimeter);
                break;

            default:
                printf("Invalid input! \n");
        }
    } else {
        printf("Invalid input, try again! \n");
    }

    return 0;
}

// Define functions for area
void area_square() {
    area = length * length;
}

void area_circle() {
    area = M_PI * pow(radius, 2);
}

void area_rectangle() {
    area = length * width;
}

void area_triangle() {
    area = 0.5 * base_length * height;
}

// Define functions for perimeter
void perimeter_square() {
    perimeter = 4 * length;
}

void perimeter_circle() {
    perimeter = 2 * M_PI * radius;
}

void perimeter_rectangle() {
    perimeter = 2 * (length + width);
}

void perimeter_triangle() {
    perimeter = 3 * base_length;
}
