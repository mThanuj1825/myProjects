#include <bits/stdc++.h>
#include <conio.h>
#include <stack>

#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286
#define degreeToRadian(D) ((D) * (PI / 180))

double result;

using namespace std;

double sum(double *arr, int n);
double product(double *arr, int n);
double area_of_triangle(double a, double b, double c);

int main(int argc, char *argv[])
{
    int size;
    double num1, num2, num3, num4, *p;
    char option;

mainMenu:
    system("cls");
    cout << "\t   Welcome to my Calculator" << endl
         << "       --------------------------------" << endl
         << endl
         << "Options available are:" << endl
         << "------------------------" << endl
         << "1. Arithmetic" << endl
         << "2. Trigonometry" << endl
         << "3. Geometry" << endl
         << "4. Exit" << endl
         << endl
         << "Select an option: ";
    cin >> option;

    switch (option)
    {
    arithmetic:
    case '1':
        system("cls");
        cout << "Options available are:" << endl
             << "------------------------" << endl
             << "1. Addition" << endl
             << "2. Subtraction" << endl
             << "3. Multiplication" << endl
             << "4. Division" << endl
             << "5. Main Menu" << endl
             << endl
             << "Select an option: ";
        cin >> option;

        switch (option)
        {
        case '1':
            system("cls");
            cout << "How many numbers do you want to add?" << endl;
            cin >> size;
            system("cls");
            p = new double[size];
            result = sum(p, size);
            cout << endl
                 << "The sum is: " << result;
            cout << endl
                 << endl
                 << "Click any key to continue...";
            delete p;
            getch();
            break;
        case '2':
            system("cls");
            cout << "Give first number: ";
            cin >> num1;
            cout << "Give second number: ";
            cin >> num2;
            cout << "The subtraction of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
            cout << endl
                 << endl
                 << "Click any key to continue...";
            getch();
            break;
        case '3':
            system("cls");
            cout << "How many numbers do you want to multiply?" << endl;
            cin >> size;
            system("cls");
            p = new double[size];
            result = product(p, size);
            cout << endl
                 << "The product is: " << result;
            cout << endl
                 << endl
                 << "Click any key to continue...";
            delete p;
            getch();
            break;
        case '4':
            system("cls");
            cout << "Give first number: ";
            cin >> num1;
            cout << "Give second number: ";
            cin >> num2;
            cout << "The quotient of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
            cout << endl
                 << endl
                 << "Click any key to continue...";
            getch();
            break;
        case '5':
            goto mainMenu;
            break;
        default:
            cout << "Invalid input" << endl;
            cout << endl
                 << endl
                 << "Click any key to continue...";
            getch();
            goto arithmetic;
            break;
        }
        break;
    case '2':
    trigonometry:
        system("cls");
        cout << "Options available are: " << endl
             << "------------------------" << endl
             << "1. Basic" << endl
             << "2. Inverse" << endl
             << "3. Hyperbolic" << endl
             << "4. Main Menu" << endl
             << endl
             << "Select an option: ";
        cin >> option;
        switch (option)
        {
        case '1':
        basicTrig:
            system("cls");
            cout << "Options available are: " << endl
                 << "------------------------" << endl
                 << "1. sin(x)" << endl
                 << "2. cos(x)" << endl
                 << "3. tan(x)" << endl
                 << "4. cosec(x)" << endl
                 << "5. sec(x)" << endl
                 << "6. cot(x)" << endl
                 << "7. Trigonometry" << endl
                 << "8. Main Menu" << endl
                 << endl
                 << "Select an option: ";
            cin >> option;
            switch (option)
            {
            sin:
            case '1':
                system("cls");
                cout << "Measuring scale: " << endl
                     << "1. Radians" << endl
                     << "2. Degrees" << endl
                     << endl
                     << "Select an option: ";
                cin >> option;
                switch (option)
                {
                case '1':
                    system("cls");
                    cout << "Give angle in radians: ";
                    cin >> num1;
                    cout << "The value of sin(" << num1 << ") is: " << sin(num1) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '2':
                    system("cls");
                    cout << "Give angle in degrees: ";
                    cin >> num1;
                    num2 = degreeToRadian(num1);
                    cout << "The value of sin(" << num1 << ") is: " << sin(num2) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                default:
                    cout << "Invalid option" << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    goto sin;
                    break;
                }
                break;
            case '2':
            cos:
                system("cls");
                cout << "Measuring scale: " << endl
                     << "1. Radians" << endl
                     << "2. Degrees" << endl
                     << endl
                     << "Select an option: ";
                cin >> option;
                switch (option)
                {
                case '1':
                    system("cls");
                    cout << "Give angle in radians: ";
                    cin >> num1;
                    cout << "The value of cos(" << num1 << ") is: " << cos(num1) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '2':
                    system("cls");
                    cout << "Give angle in degrees: ";
                    cin >> num1;
                    num2 = degreeToRadian(num1);
                    cout << "The value of cos(" << num1 << ") is: " << cos(num2) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                default:
                    cout << "Invalid option" << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    goto cos;
                    break;
                }
                break;
            case '3':
            tan:
                system("cls");
                cout << "Measuring scale: " << endl
                     << "1. Radians" << endl
                     << "2. Degrees" << endl
                     << endl
                     << "Select an option: ";
                cin >> option;
                switch (option)
                {
                case '1':
                    system("cls");
                    cout << "Give angle in radians: ";
                    cin >> num1;
                    cout << "The value of tan(" << num1 << ") is: " << tan(num1) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '2':
                    system("cls");
                    cout << "Give angle in degrees: ";
                    cin >> num1;
                    num2 = degreeToRadian(num1);
                    cout << "The value of tan(" << num1 << ") is: " << tan(num2) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                default:
                    cout << "Invalid option" << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    goto tan;
                    break;
                }
                break;
            case '4':
            cosec:
                system("cls");
                cout << "Measuring scale: " << endl
                     << "1. Radians" << endl
                     << "2. Degrees" << endl
                     << endl
                     << "Select an option: ";
                cin >> option;
                switch (option)
                {
                case '1':
                    system("cls");
                    cout << "Give angle in radians: ";
                    cin >> num1;
                    cout << "The value of cosec(" << num1 << ") is: " << 1 / sin(num1) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '2':
                    system("cls");
                    cout << "Give angle in degrees: ";
                    cin >> num1;
                    num2 = degreeToRadian(num1);
                    cout << "The value of cosec(" << num1 << ") is: " << 1 / sin(num2) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                default:
                    cout << "Invalid option" << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    goto cosec;
                    break;
                }
                break;
            case '5':
            sec:
                system("cls");
                cout << "Measuring scale: " << endl
                     << "1. Radians" << endl
                     << "2. Degrees" << endl
                     << endl
                     << "Select an option: ";
                cin >> option;
                switch (option)
                {
                case '1':
                    system("cls");
                    cout << "Give angle in radians: ";
                    cin >> num1;
                    cout << "The value of sec(" << num1 << ") is: " << 1 / cos(num1) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '2':
                    system("cls");
                    cout << "Give angle in degrees: ";
                    cin >> num1;
                    num2 = degreeToRadian(num1);
                    cout << "The value of sec(" << num1 << ") is: " << 1 / cos(num2) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                default:
                    cout << "Invalid option" << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    goto sec;
                    break;
                }
                break;
            case '6':
            cot:
                system("cls");
                cout << "Measuring scale: " << endl
                     << "1. Radians" << endl
                     << "2. Degrees" << endl
                     << endl
                     << "Select an option: ";
                cin >> option;
                switch (option)
                {
                case '1':
                    system("cls");
                    cout << "Give angle in radians: ";
                    cin >> num1;
                    cout << "The value of cot(" << num1 << ") is: " << 1 / tan(num1) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '2':
                    system("cls");
                    cout << "Give angle in degrees: ";
                    cin >> num1;
                    num2 = degreeToRadian(num1);
                    cout << "The value of cot(" << num1 << ") is: " << 1 / tan(num2) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                default:
                    cout << "Invalid option" << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    goto cot;
                    break;
                }
                break;
            case '7':
                goto trigonometry;
                break;
            case '8':
                goto mainMenu;
                break;
            default:
                break;
            }
            break;
        case '2':
        inverseTrig:
            system("cls");
            cout << "Options available are: " << endl
                 << "------------------------" << endl
                 << "1. sin^-1(x)" << endl
                 << "2. cos^-1(x)" << endl
                 << "3. tan^-1(x)" << endl
                 << "4. cosec^-1(x)" << endl
                 << "5. sec^-1(x)" << endl
                 << "6. cot^-1(x)" << endl
                 << "7. Trigonometry" << endl
                 << "8. Main Menu" << endl
                 << endl
                 << "Select an option: ";
            cin >> option;
            switch (option)
            {
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '6':
                break;
            case '7':
                break;
            case '8':
                break;
            default:
                break;
            }
            break;
        case '3':
        hyperTrig:
            system("cls");
            cout << "Options available are: " << endl
                 << "------------------------" << endl
                 << "1. Basic" << endl
                 << "2. Inverse" << endl
                 << "3. Trigonometry" << endl
                 << "4. Main Menu" << endl
                 << endl
                 << "Select an option: ";
            cin >> option;
            switch (option)
            {
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            default:
                break;
            }
            break;
        case '4':
            goto mainMenu;
            break;
        default:
            break;
        }
        break;
    case '3':
    geometry:
        system("cls");
        cout << "Options available are: " << endl
             << "------------------------" << endl
             << "1. Area" << endl
             << "2. Volume" << endl
             << "3. Main Menu" << endl
             << endl
             << "Select an option: ";
        cin >> option;
        switch (option)
        {
        case '1':
        area:
            system("cls");
            cout << "Options available are: " << endl
                 << "------------------------" << endl
                 << "1. Circle" << endl
                 << "2. Triangle" << endl
                 << "3. Square" << endl
                 << "4. Rectangle" << endl
                 << "5. Parallelogram" << endl
                 << "6. Geometry" << endl
                 << "7. Main Menu" << endl
                 << endl
                 << "Select an option: ";
            cin >> option;
            switch (option)
            {
            case '1':
            areaCircle:
                system("cls");
                cout << "Enter radius: ";
                cin >> num1;
                if (num1 <= 0)
                {
                    cout << "Not a valid circle" << endl
                         << "Click any key to continue";
                    getch();
                    goto areaCircle;
                }
                else
                    cout << "The area of circle with radius " << num1 << " is: " << PI * num1 * num1 << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                break;
            case '2':
            areaTriangle:
                system("cls");
                cout << "Enter the sides: " << endl;
                cin >> num1 >> num2 >> num3;
                if (num1 + num2 <= num3 || num2 + num3 <= num1 || num3 + num1 <= num2 || num1 <= 0 || num2 <= 0 || num3 <= 0)
                {
                    cout << "Not a valid triangle" << endl
                         << "Click any key to continue...";
                    getch();
                    goto areaTriangle;
                }
                else
                {
                    result = area_of_triangle(num1, num2, num3);
                    cout << "Area of the given triangle is: " << result;
                }
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                break;
            case '3':
            areaSquare:
                system("cls");
                cout << "Enter side: " << endl;
                cin >> num1;
                if (num1 <= 0)
                {
                    cout << "Not a valid square" << endl
                         << "Click any key to continue...";
                    getch();
                    goto areaSquare;
                }
                else
                    cout << "Area of the given square is: " << num1 * num1 << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                break;
            case '4':
            areaRectangle:
                system("cls");
                cout << "Enter length: ";
                cin >> num1;
                cout << "Enter breadth: ";
                cin >> num2;
                if (num1 <= 0 || num2 <= 0)
                {
                    cout << "Not a valid rectangle" << endl
                         << "Click any key to continue...";
                    getch();
                    goto areaRectangle;
                }
                else
                    cout << "Area of the given rectangle is: " << num1 * num2 << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                break;
            case '5':
            areaParallelogram:
                system("cls");
                cout << "Options available are: " << endl
                     << "------------------------" << endl
                     << "1. Using Base and Height" << endl
                     << "2. Using Trigonometry" << endl
                     << "3. Using Diagonals" << endl
                     << endl
                     << "Select an option: ";
                cin >> option;
                switch (option)
                {
                case '1':
                Pbaseandheight:
                    system("cls");
                    cout << "Enter base: ";
                    cin >> num1;
                    cout << "Enter height: ";
                    cin >> num2;
                    if (num1 <= 0 || num2 <= 0)
                    {
                        cout << "Not a valid parallelogram" << endl
                             << "Click any key to continue...";
                        getch();
                        goto Pbaseandheight;
                    }
                    else
                        cout << "Area of given parallelogram is: " << num1 * num2 << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '2':
                Ptrigonometry:
                    system("cls");
                    cout << "Enter side a: ";
                    cin >> num1;
                    cout << "Enter side b: ";
                    cin >> num2;
                    cout << "Enter angle between a and b: ";
                    cin >> num3;
                    num4 = degreeToRadian(num3);
                    if (num1 <= 0 || num2 <= 0 || num3 <= 0 || num3 >= 180)
                    {
                        cout << "Not a valid parallelogram" << endl
                             << "Click any key to continue...";
                        getch();
                        goto Ptrigonometry;
                    }
                    else
                        cout << "Area of the given parallelogram is: " << num1 * num2 * sin(num4) << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '3':
                Pdiagonals:
                    system("cls");
                    cout << "Enter diagonal 1: ";
                    cin >> num1;
                    cout << "Enter diagonal 2: ";
                    cin >> num2;
                    cout << "Enter angle between diagonals: ";
                    cin >> num3;
                    num4 = degreeToRadian(num3);
                    if (num1 <= 0 || num2 <= 0 || num1 == num2 || num3 <= 0 || num3 >= 180 || num3 == 90)
                    {
                        cout << "Not a valid parallelogram" << endl
                             << "Click any key to continue...";
                        getch();
                        goto Pdiagonals;
                    }
                    else
                        cout << "Area of the given parallelogram is: " << (num1 * num2 * sin(num4)) / 2 << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                default:
                    cout << "Invalid input" << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    goto areaParallelogram;
                    break;
                }
                break;
            case '6':
                goto geometry;
                break;
            case '7':
                goto mainMenu;
                break;
            default:
                cout << "Invalid input" << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                goto area;
                break;
            }
            break;
        case '2':
        volume:
            system("cls");
            cout << "Options available are: " << endl
                 << "------------------------" << endl
                 << "1. Sphere" << endl
                 << "2. Cylinder" << endl
                 << "3. Cube" << endl
                 << "4. Cuboid" << endl
                 << "5. Triangular prism" << endl
                 << "6. Geometry" << endl
                 << "7. Main Menu" << endl
                 << endl
                 << "Select an option: ";
            cin >> option;
            switch (option)
            {
            case '1':
            volumeSphere:
                system("cls");
                cout << "Give radius: ";
                cin >> num1;
                if (num1 <= 0)
                {
                    cout << "Not a valid sphere" << endl
                         << "Click any key to continue...";
                    getch();
                    goto volumeSphere;
                }
                else
                    cout << "Volume of the given sphere is: " << (4 * PI * num1 * num1 * num1) / 3 << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                break;
            case '2':
            volumeCylinder:
                system("cls");
                cout << "Give radius: ";
                cin >> num1;
                cout << "Give height: ";
                cin >> num2;
                if (num1 <= 0 || num2 <= 0)
                {
                    cout << "Not a valid cylinder" << endl
                         << "Click any key to continue...";
                    getch();
                    goto volumeCylinder;
                }
                else
                    cout << "Volume of the given cylinder is: " << PI * num1 * num1 * num2 << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                break;
            case '3':
            volumeCube:
                system("cls");
                cout << "Give side: ";
                cin >> num1;
                if (num1 <= 0)
                {
                    cout << "Not a valid cube" << endl
                         << "Click any key to continue...";
                    getch();
                    goto volumeCube;
                }
                else
                    cout << "Volume of the given cube is: " << num1 * num1 * num1 << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                break;
            case '4':
            volumeCuboid:
                system("cls");
                cout << "Give length: ";
                cin >> num1;
                cout << "Give width: ";
                cin >> num2;
                cout << "Give height: ";
                cin >> num3;
                if (num1 <= 0 || num2 <= 0 || num3 <= 0)
                {
                    cout << "Not a valid cuboid" << endl
                         << "Click any key to continue...";
                    getch();
                    goto volumeCuboid;
                }
                else
                    cout << "Volume of the given cuboid is: " << num1 * num2 * num3 << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                break;
            case '5':
            volumeTriangularPrism:
                system("cls");
                cout << "Options available are: " << endl
                     << "------------------------" << endl
                     << "1. Equal sides" << endl
                     << "2. Different sides" << endl
                     << endl
                     << "Select an option: ";
                cin >> option;
                switch (option)
                {
                case '1':
                TPequal:
                    system("cls");
                    cout << "Give side: ";
                    cin >> num1;
                    cout << "Give length: ";
                    cin >> num2;
                    cout << "Give height: ";
                    cin >> num3;
                    if (num1 <= 0 || num2 <= 0 || num3 <= 0)
                    {
                        cout << "Not a valid triangular prism" << endl
                             << "Click any key to continue...";
                        getch();
                        goto TPequal;
                    }
                    else
                        cout << "Volume of the given triangular prism is: " << (num1 * num2 * num3) / 2 << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                case '2':
                TPdifferent:
                    system("cls");
                    cout << "Give side a: ";
                    cin >> num1;
                    cout << "Give side b: ";
                    cin >> num2;
                    cout << "Give side c: ";
                    cin >> num3;
                    cout << "Give height: ";
                    cin >> num4;
                    if (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0 || num1 + num2 <= num3 || num2 + num3 <= num1 || num3 + num1 <= num2)
                    {
                        cout << "Not a valid triangular prism" << endl
                             << "Click any key to continue...";
                        getch();
                        goto TPdifferent;
                    }
                    else
                        cout << "Volume of the given triangular prism is: " << (sqrt(2 * ((num1 * num2) * (num1 * num2)) + 2 * ((num2 * num3) * (num2 * num3)) + 2 * ((num3 * num1) * (num3 * num1)) - (num1 * num1 * num1 * num1) - (num2 * num2 * num2 * num2) - (num3 * num3 * num3 * num3))) / 4 << endl;
                    cout << endl
                         << endl
                         << "Click any key to continue...";
                    getch();
                    break;
                default:
                    break;
                }
                break;
            case '6':
                goto geometry;
                break;
            case '7':
                goto mainMenu;
                break;
            default:
                cout << "Invalid input" << endl;
                cout << endl
                     << endl
                     << "Click any key to continue...";
                getch();
                goto volume;
                break;
            }
            break;
        case '3':
            goto mainMenu;
            break;
        default:
            cout << "Invalid input" << endl;
            cout << endl
                 << endl
                 << "Click any key to continue...";
            getch();
            goto geometry;
            break;
        }
        break;
    case '4':
        system("cls");
        return 0;
        break;
    default:
        cout << "Invalid Input" << endl;
        cout << endl
             << endl
             << "Click any key to continue...";
        getch();
        goto mainMenu;
        break;
    }

restartChoice:
    system("cls");
    cout << "Do you want to exit?" << endl
         << endl
         << "1. Yes" << endl
         << "2. No" << endl
         << endl
         << "Select an option: ";
    cin >> option;
    switch (option)
    {
    case '1':
        system("cls");
        return 0;
    case '2':
        goto mainMenu;
        break;
    default:
        cout << "Invalid option" << endl;
        cout << endl
             << endl
             << "Click any key to continue...";
        getch();
        goto restartChoice;
    }

    return 0;
}

double sum(double *arr, int n)
{
    double res = 0;
    cout << "Give numbers: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        res += arr[i];
    return res;
}
double product(double *arr, int n)
{
    double res = 1;
    cout << "Give numbers: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        res *= arr[i];
    return res;
}
double area_of_triangle(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}