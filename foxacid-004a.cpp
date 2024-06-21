#include <iostream>
#include <cmath>
#include <string>

//TRIGONOMETRY CALCULATOR, Programma "Foxacid", Project TAIHOKU, Ob'iekt 004A, June 16 2024
//REPUBLIC OF CHINA

//if (going to crash) {
//  please don't;
//}

//MAIN FUNCTION
int main() {
    using namespace std;
    const double PI = 3.1415926535897932384626433832795028841971693993751058209;
//GENERAL CODE SECTOR
    int mode;
//MODE 0 CODE SECTOR
    float a, b, c, ab, ac, bc, mode_0_imput_num, rs_m0, rt_ac, rt_ab, rt_bc;                                                                                                       //rt:ratio
    int m0im;                                                                                                                                                                      //mode 0 imput:m0im
//MODE 1(1a), 2(1b) CODE SECTOR
    float mode_1a_imput_num, mode_1b_imput_num, mode_1b_convertsion, rs_m1, rs_m1_anti;                                                                                            //rs:result, 1=1a, 2=1b
    int m1ai, m1bi;                                                                                                                                                                //mode 1a imput:m1ai, mode 1b imput:m1b
//MODE 3 CODE SECTOR
    float mode_3_convertsion;
    int mode_3_imput_fn_x1, mode_3_imput_fn_x2_1, mode_3_imput_fn_x2_2, m3d1, m3d2, m3cfr;                                                                                         //m3dx:mode 3 display x. was int64_t, cn 240619-103853
    float mode_3_imput_fn_a, mode_3_imput_fn_b, mode_3_imput_fn_c, mode_3_imput_fn_d;
//INTERFACE 0
    cout << "TRIGONOMETRY CALCULATOR\n";
    cout << "DEGREE CALCULATOR. (UNDER DEVELOPMENT)            (0)\n";
    cout << "NUMERICAL IMPUT IN RADIANS,                       (1)\n";
    cout << "NUMERICAL IMPUT IN DEGREES.                       (2)\n";
    cout << "TRIGONOMETRY DERIVATIVE.                          (3)\n";
    cout << "SELECT MODE: ";
    cin >> mode;
//MODE 0
    if (mode == 0) {                                                                                                                                                               //MODE 0, DEGREE CALCULATOR
        cout << "    /| \n";
        cout << "   / | \n";
        cout << " a/  |b\n";
        cout << " /___| \n";
        cout << "   c   \n";
        cout << "INPUT VALUE A.\n";
        cin >> a;
        cout << "INPUT VALUE B.\n";
        cin >> b;
        cout << "INPUT VALUE C.\n";
        cin >> c;
        ab = a + b;
        ac = a + c;
        bc = b + c;
        if (ab <= c || ac <= b || bc <= a) {
            cout << "VALUE IMPUT ERROR, PROGRAM CLOSING.\n";
        }
        else {
            cout << "DEGREES BETWEEN AB(0) / AC(1) / BC(2).\n";
            cout << "YOU SELECT DEGREES BETWEEN: ";
            cin >> m0im;
            if (m0im == 0) {
                rt_ac = c / a;
                while (rs_m0 < 90 && rs_m0 > 0) {
                    rt_ac = cos(rs_m0 / 57.296);
                    cout << rs_m0 << endl;
                }
            }
            else if (m0im == 1) {
                rs_m0 = sin(mode_1a_imput_num);
                cout << rs_m0 << endl;
            }
            else if (m0im == 2) {
                rs_m0 = tan(mode_1a_imput_num);
                cout << rs_m0 << endl;
            }
            else {
                cout << m0im << " is not a valid option.\n";
            }
        }
    }
//MODE 1
    else if (mode == 1) {                                                                                                                                                          //MODE 1, NUMERICAL IMPUT IN RADIANS
        cout << "SELECT COSINE(0) / SINE(1) / TANGENT(2) / COTANGENT(3) / COSECANT(4) / SECANT(5).\n";
        cout << "YOU SELECT MODE: ";
        cin >> m1ai;
        while (m1ai < 0 || m1ai > 5) {
            cout << m1ai << " is not a valid option.\n";
            cout << "Please re-enter your options.";
            cin >> m1ai;
        }
        while (m1ai <= 5 && m1ai >= 0) {
            cout << "IMPUT THE VALUE IN RADIANS: ";
            cin >> mode_1a_imput_num;
            if (m1ai == 0) {
                rs_m1 = cos(mode_1a_imput_num);
                cout << rs_m1 << endl;
            }
            else if (m1ai == 1) {
                rs_m1 = sin(mode_1a_imput_num);
                cout << rs_m1 << endl;
            }
            else if (m1ai == 2) {
                rs_m1 = tan(mode_1a_imput_num);
                cout << rs_m1 << endl;
            }
                else if (m1ai == 3) {
                rs_m1 = tan(mode_1a_imput_num);
                rs_m1_anti = 1 / rs_m1;
                cout << rs_m1_anti << endl;
            }
            else if (m1ai == 4) {
                rs_m1 = sin(mode_1a_imput_num);
                rs_m1_anti = 1 / rs_m1;
                cout << rs_m1_anti << endl;
            }
            else if (m1ai == 5) {
                rs_m1 = cos(mode_1a_imput_num);
                rs_m1_anti = 1 / rs_m1;
                cout << rs_m1_anti << endl;
            }
        break;
        }
    }
//MODE 2
    else if (mode == 2) {                                                                                                                                                          //MODE 2, NUMERICAL IMPUT IN DEGREES
        cout << "SELECT COSINE(0) / SINE(1) / TANGENT(2) / COTANGENT(3) / COSECANT(4) / SECANT(5).\n";
        cout << "YOU SELECT MODE: ";
        cin >> m1bi;
        while (m1bi < 0 || m1bi > 5) {
            cout << m1bi << " is not a valid option.\n";
            cout << "Please re-enter your options.";
            cin >> m1bi;
        }
        while (m1bi <= 5 && m1bi >= 0) {
            cout << "IMPUT THE VALUE IN DEGREES: ";
            cin >> mode_1b_imput_num;
            mode_1b_convertsion = 180 / mode_1b_imput_num;
            if (m1bi == 0) {
                rs_m1 = cos(PI / mode_1b_convertsion);
                cout << rs_m1 << endl;
            }
            else if (m1bi == 1) {
                rs_m1 = sin(PI / mode_1b_convertsion);
                cout << rs_m1 << endl;
            }
            else if (m1bi == 2) {
                rs_m1 = tan(PI / mode_1b_convertsion);
                cout << rs_m1 << endl;
            }
            else if (m1bi == 3) {
                rs_m1 = tan(PI / mode_1b_convertsion);
                rs_m1_anti = 1 / rs_m1;
                cout << rs_m1_anti << endl;
            }
            else if (m1bi == 4) {
                rs_m1 = sin(PI / mode_1b_convertsion);
                rs_m1_anti = 1 / rs_m1;
                cout << rs_m1_anti << endl;
            }
            else if (m1bi == 5) {
                rs_m1 = cos(PI / mode_1b_convertsion);
                rs_m1_anti = 1 / rs_m1;
                cout << rs_m1_anti << endl;
            }
            break;
        }
    }
//MODE 3
    else if (mode == 3) {     
//STRING SESSION, MODE 3
        string mode_3[16] =                    {"cos",    "B1",        "B2",        "sin",    "B4",     "B5", "tan",    "B7",      "B8", "cot",    "B10",        "B11", "csc",    "B13",             "B14", "sec"};                                                                                                             //FUNCTION DISPLAY
        string mode_3_general_derivative[17] = {"cos(x)", "[-sin(x)]", "[-cos(x)]", "sin(x)", "cos(x)", "A5", "tan(x)", "sec²(x)", "A8", "cot(x)", "[-csc²(x)]", "A11", "csc(x)", "[-cot(x)csc(x)]", "A14", "sec(x)", "sec(x)tan(x)"};
//MAIN FUNCTION, MODE 3
        cout << "IMPUT FUNCTIONS: \n";
        cout << "a(x_1)^2 + b(x_2) + c = d\n";
        cout << "a = ";
        cin >> mode_3_imput_fn_a;
        cout << "\n" << "b = ";
        cin >> mode_3_imput_fn_b;
        cout << "\n" << "c = ";
        cin >> mode_3_imput_fn_c;
        cout << "\n";
        cout << "FOR x and x², cos(x) =0= / sin(x) =3= / tan(x) =6= / cot(x) =9= / csc(x) =12= / sec(x) =15=\n";
        cout << "The first x² option: ";
        cin >> mode_3_imput_fn_x2_1;
        while (mode_3_imput_fn_x2_1 % 3 != 0 || mode_3_imput_fn_x2_1 > 15 || mode_3_imput_fn_x2_1 < 0) {
            cout << "THE OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter the first x² option: ";
            cin >> mode_3_imput_fn_x2_1;
        }
        cout << "\n" << "The second x² option: ";
        cin >> mode_3_imput_fn_x2_2;
        while (mode_3_imput_fn_x2_2 % 3 != 0 || mode_3_imput_fn_x2_2 > 15 || mode_3_imput_fn_x2_2 < 0) {
            cout << "THE OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter the second x² option: ";
            cin >> mode_3_imput_fn_x2_2;
        }
        cout << "\n" << "Enter the x option: ";
        cin >> mode_3_imput_fn_x1;
        while (mode_3_imput_fn_x1 % 3 != 0 || mode_3_imput_fn_x1 > 15 || mode_3_imput_fn_x1 < 0) {
            cout << "THE OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter the x option: ";
            cin >> mode_3_imput_fn_x1;
        }
        cout << "\n";
        string mode_3_x2_output_1 = mode_3[mode_3_imput_fn_x2_1];
        string mode_3_x2_output_2 = mode_3[mode_3_imput_fn_x2_2];
        string mode_3_x1_output = mode_3[mode_3_imput_fn_x1];
        cout << "THE FUNCTION IS: " << mode_3_imput_fn_a << mode_3_x2_output_1 << "(x)" << mode_3_x2_output_2 << "(x)+" << mode_3_imput_fn_b << mode_3_x1_output << "(x)+" << mode_3_imput_fn_c << "\n";
        cout << "Confirm? (YES = 0, NO = 1, EXIT = CTRL+C)\n";
        cin >> m3cfr;
        while (m3cfr != 0 && m3cfr != 1) {
            cout << "THIS OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter your option: ";
            cin >> m3cfr;
        }
//CALCULATING MODULE
        while (m3cfr == 0) {
            string mode_3_x2_output_1_derivative_1 = mode_3_general_derivative[mode_3_imput_fn_x2_1 + 0];
            string mode_3_x2_output_2_derivative_2 = mode_3_general_derivative[mode_3_imput_fn_x2_1 + 1];
            string mode_3_x2_output_2_derivative_1 = mode_3_general_derivative[mode_3_imput_fn_x2_2 + 0];
            string mode_3_x2_output_1_derivative_2 = mode_3_general_derivative[mode_3_imput_fn_x2_2 + 1];
            string mode_3_x1_output_1_derivative_1 = mode_3_general_derivative[mode_3_imput_fn_x1 + 1];
            cout << "THE RESULT IS: " << mode_3_imput_fn_a << mode_3_x2_output_1_derivative_1 << mode_3_x2_output_1_derivative_2 << "+" << mode_3_imput_fn_a << mode_3_x2_output_2_derivative_1 << mode_3_x2_output_2_derivative_2 << "+" << mode_3_imput_fn_b << mode_3_x1_output_1_derivative_1 << endl;
            break;
            exit(0);
        }
    }
}
