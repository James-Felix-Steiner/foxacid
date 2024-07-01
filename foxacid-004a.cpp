#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <chrono>

//TRIGONOMETRY CALCULATOR, Programma "Foxacid", Project TAIHOKU, Ob'iekt 004A, June 20 2024
//REPUBLIC OF CHINA

//if (going to crash) {
//  please don't;
//}

//MAIN FUNCTION
int main() {
    const double PI = 3.1415926535897932384626433832795028841971693993751058209;
//GENERAL CODE SECTOR
    int   mode;
    int   var_int_a, var_int_b, var_int_c, var_int_d, var_int_e, var_int_f, var_int_g, var_int_h;
//MODE 0 CODE SECTOR
    float a, b, c, ab, ac, bc, mode_0_imput_num, rs_m0, rt_ac, rt_ab, rt_bc;                                                                                                       //rt:ratio
    int   m0im;                                                                                                                                                                    //mode 0 imput:m0im
//MODE 1(1a), 2(1b) CODE SECTOR
    float mode_1a_imput_num, mode_1b_imput_num, mode_1b_convertsion, rs_m1;                                                                                                        //rs:result, 1=1a, 2=1b
    int   m1ai, m1bi;                                                                                                                                                              //mode 1a imput:m1ai, mode 1b imput:m1b
//MODE 3 CODE SECTOR
    int   mode_3_imput_fn_x1, mode_3_imput_fn_x2_1, mode_3_imput_fn_x2_2, m3d1, m3d2, m3cfr;                                                                                       //m3dx:mode 3 display x. was int64_t, cn 240619-103853
    float mode_3_imput_fn_a, mode_3_imput_fn_b, mode_3_imput_fn_c, mode_3_imput_fn_d;
//MODE 4 CODE SECTOR
    float m4im_fx1, m4im_fx2, m4im_block_size_rhs, m4im_block_size_1_rhs, m4im_block_size_2_rhs, m4im_block_size_lhs, m4im_block_size_1_lhs, m4im_block_size_2_lhs;
    float holydogshit_lhs, holydogshit_rhs, holydogshit_output_lhs, holydogshit_output_rhs, m4im_block_size_1_lhs_1, m4im_block_size_1_rhs_1, m4_cr_0, m4_cr_1, m4_cr_2, m4_cr_3, m4_cr_a, m4_cr_b, m4_cr_c;
    int   m4_1_im, m4_2_im, m4_2_im_side, m4_2_im_b, m4_2_im_s, m4_2_im_bs, m4_2_im_loop, methamphetamine, m4_3_im, zero;
//VARIABLE =
    m4_cr_0 = 0;
    m4_cr_1 = 0;
    m4_cr_2 = 0;
    m4_cr_3 = 0;
    m4_cr_a = 0;
    m4_cr_b = 3000;
    m4_cr_c = 0;
    m4_2_im_loop = 0;
    holydogshit_lhs = 3;                                                                                                                                        
    holydogshit_rhs = 3;
    holydogshit_output_lhs = 3;
    holydogshit_output_rhs = 3;
    zero = 0;
//INTERFACE 0
    std::cout << "CALCULATOR\n";
    std::cout << "DEGREE CALCULATOR. (UNDER DEVELOPMENT)            (0)\n";
    std::cout << "NUMERICAL IMPUT IN RADIANS,                       (1)\n";
    std::cout << "NUMERICAL IMPUT IN DEGREES.                       (2)\n";
    std::cout << "TRIGONOMETRY DERIVATIVE.                          (3)\n";
    std::cout << "IMPLICIT DIFFERENTIATION. (UNDER DEVELOPMENT)     (4)\n";
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    std::chrono::high_resolution_clock::time_point end   = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_span = end - start;
    std::cout << "RUNTIME: " << time_span.count() << "\n";
    std::cout << "SELECT MODE: ";
    std::cin  >> mode;
    std::string small_numbers[10] = {"⁰", "¹", "²", "³", "⁴", "⁵", "⁶", "⁷", "⁸", "⁹"};
//MODE 0
    if (mode == 0) {                                                                                                                                                               //MODE 0, DEGREE CALCULATOR
        using namespace std;
        cout << "    /| \n";
        cout << "   / | \n";
        cout << " a/  |b\n";
        cout << " /___| \n";
        cout << "   c   \n";
        cout << "INPUT VALUE A.\n";
        cin  >> a;
        cout << "INPUT VALUE B.\n";
        cin  >> b;
        cout << "INPUT VALUE C.\n";
        cin  >> c;
        ab = a + b;
        ac = a + c;
        bc = b + c;
        if (ab <= c || ac <= b || bc <= a) {
            cout << "VALUE IMPUT ERROR, PROGRAM CLOSING.\n";
        }
        else {
            cout << "DEGREES BETWEEN AB(0) / AC(1) / BC(2).\n";
            cout << "YOU SELECT DEGREES BETWEEN: ";
            cin  >> m0im;
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
                cout << "re-enter your option: ";
                cin  >> m0im;
            }
        }
    }
//MODE 1
    else if (mode == 1) {                                                                                                                                                          //MODE 1, NUMERICAL IMPUT IN RADIANS
        using namespace std;
        cout << "SELECT COSINE(0) / SINE(1) / TANGENT(2) / COTANGENT(3) / COSECANT(4) / SECANT(5).\n";
        cout << "YOU SELECT MODE: ";
        cin  >> m1ai;
        if (m1ai < 0 || m1ai > 5) {
            cout << m1ai << " is not a valid option.\n";
            cout << "Please re-enter your options.";
            cin  >> m1ai;
        }
        cout << "IMPUT THE VALUE IN RADIANS: ";
        cin  >> mode_1a_imput_num;
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
            rs_m1 = 1 / tan(mode_1a_imput_num);
            cout << rs_m1 << endl;
        }
        else if (m1ai == 4) {
            rs_m1 = 1 / sin(mode_1a_imput_num);
            cout << rs_m1 << endl;
        }
        else if (m1ai == 5) {
            rs_m1 = 1 / cos(mode_1a_imput_num);
            cout << rs_m1 << endl;
        }
    }
//MODE 2
    else if (mode == 2) {                                                                                                                                                          //MODE 2, NUMERICAL IMPUT IN DEGREES
        using namespace std;
        cout << "SELECT COSINE(0) / SINE(1) / TANGENT(2) / COTANGENT(3) / COSECANT(4) / SECANT(5).\n";
        cout << "YOU SELECT MODE: ";
        cin  >> m1bi;
        while (m1bi < 0 || m1bi > 5) {
            cout << m1bi << " is not a valid option.\n";
            cout << "Please re-enter your options.";
            cin >> m1bi;
        }
        cout << "IMPUT THE VALUE IN DEGREES: ";
        cin  >> mode_1b_imput_num;
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
            rs_m1 = 1 / tan(PI / mode_1b_convertsion);
            cout << rs_m1 << endl;
        }
        else if (m1bi == 4) {
            rs_m1 = 1 / sin(PI / mode_1b_convertsion);
            cout << rs_m1 << endl;
        }
        else if (m1bi == 5) {
            rs_m1 = 1 / cos(PI / mode_1b_convertsion);
            cout << rs_m1 << endl;
        }
    }
//MODE 3
    else if (mode == 3) {     
        using namespace std;
//STRING SESSION, MODE 3
        string mode_3[16] =                    {"cos",    "B1",        "B2",        "sin",    "B4",     "B5", "tan",    "B7",      "B8", "cot",    "B10",        "B11", "csc",    "B13",             "B14", "sec"};                                                                                                             //FUNCTION DISPLAY
        string mode_3_general_derivative[17] = {"cos(x)", "[-sin(x)]", "[-cos(x)]", "sin(x)", "cos(x)", "A5", "tan(x)", "sec²(x)", "A8", "cot(x)", "[-csc²(x)]", "A11", "csc(x)", "[-cot(x)csc(x)]", "A14", "sec(x)", "sec(x)tan(x)"};
//MAIN FUNCTION, MODE 3
        cout << "IMPUT FUNCTIONS: \n";
        cout << "a(x_1)(x_2) + bx + c\n";
        cout << "a = ";
        cin  >> mode_3_imput_fn_a;
        cout << "\n" << "b = ";
        cin  >> mode_3_imput_fn_b;
        cout << "\n" << "c = ";
        cin  >> mode_3_imput_fn_c;
        cout << "\n";
        cout << "FOR x and x², cos(x) =0= / sin(x) =3= / tan(x) =6= / cot(x) =9= / csc(x) =12= / sec(x) =15=\n";
        cout << "The first x² option: ";
        cin  >> mode_3_imput_fn_x2_1;
        while (mode_3_imput_fn_x2_1 % 3 != 0 || mode_3_imput_fn_x2_1 > 15 || mode_3_imput_fn_x2_1 < 0) {
            cout << "THE OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter the first x² option: ";
            cin  >> mode_3_imput_fn_x2_1;
        }
        cout << "\n" << "The second x² option: ";
        cin  >> mode_3_imput_fn_x2_2;
        while (mode_3_imput_fn_x2_2 % 3 != 0 || mode_3_imput_fn_x2_2 > 15 || mode_3_imput_fn_x2_2 < 0) {
            cout << "THE OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter the second x² option: ";
            cin  >> mode_3_imput_fn_x2_2;
        }
        cout << "\n" << "Enter the x option: ";
        cin  >> mode_3_imput_fn_x1;
        while (mode_3_imput_fn_x1 % 3 != 0 || mode_3_imput_fn_x1 > 15 || mode_3_imput_fn_x1 < 0) {
            cout << "THE OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter the x option: ";
            cin  >> mode_3_imput_fn_x1;
        }
        cout << "\n";
        string mode_3_x2_output_1 = mode_3[mode_3_imput_fn_x2_1];
        string mode_3_x2_output_2 = mode_3[mode_3_imput_fn_x2_2];
        string mode_3_x1_output   = mode_3[mode_3_imput_fn_x1];
        cout << "THE FUNCTION IS: " << mode_3_imput_fn_a << mode_3_x2_output_1 << "(x)" << mode_3_x2_output_2 << "(x)+" << mode_3_imput_fn_b << mode_3_x1_output << "(x)+" << mode_3_imput_fn_c << "\n";
        cout << "Confirm? (YES = 0, NO = 1, EXIT = CTRL+C)\n";
        cin  >> m3cfr;
        while (m3cfr != 0 && m3cfr != 1) {
            cout << "THIS OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter your option: ";
            cin  >> m3cfr;
        }
//CALCULATING MODULE
        while (m3cfr == 0) {
            string mode_3_x2_output_1_derivative_1 = mode_3_general_derivative[mode_3_imput_fn_x2_1 + 0];
            string mode_3_x2_output_2_derivative_2 = mode_3_general_derivative[mode_3_imput_fn_x2_1 + 1];
            string mode_3_x2_output_2_derivative_1 = mode_3_general_derivative[mode_3_imput_fn_x2_2 + 0];
            string mode_3_x2_output_1_derivative_2 = mode_3_general_derivative[mode_3_imput_fn_x2_2 + 1];
            string mode_3_x1_output_1_derivative_1 = mode_3_general_derivative[mode_3_imput_fn_x1 + 1]  ;
            cout << "THE RESULT IS: " << mode_3_imput_fn_a << mode_3_x2_output_1_derivative_1 << mode_3_x2_output_1_derivative_2 << "+" << mode_3_imput_fn_a << mode_3_x2_output_2_derivative_1 << mode_3_x2_output_2_derivative_2 << "+" << mode_3_imput_fn_b << mode_3_x1_output_1_derivative_1 << endl;
            break;
            exit(0);
        }
    }
//MODE 4
    else if (mode == 4) {
        using namespace std;
        string display_mode_4_x[5]    = {"n", "x", "x²", "x³", "x⁴"};
        string display_mode_4_y[5]    = {"n", "y", "y²", "y³", "y⁴"};
        string display_mode_4_side[2] = {"LHS", "RHS"};
        cout << "BLOCK SIZE OF THE FUNCTION IS LIKE, 3x²y + 4y³, AND IT WILL BE 2 BLOCKS.\n";
        cout << "IMPUT THE FUNCTION BLOCK SIZE OF LHS: ";
        cin  >> m4im_block_size_lhs;
        cout << "\n";
        while (m4im_block_size_lhs < 0) {
            cout << "DNE, RE-ENTER DATA: ";
            cin  >> m4im_block_size_lhs;
            break;
        }
        cout << "IMPUT THE FUNCTION BLOCK SIZE OF RHS: ";
        cin  >> m4im_block_size_rhs;
        while (m4im_block_size_rhs < 0) {
            cout << "DNE, RE-ENTER DATA: ";
            cin  >> m4im_block_size_rhs;
            break;
        }
        cout << "\n";
        m4im_block_size_1_lhs   = m4im_block_size_lhs * 3   ;
        m4im_block_size_2_lhs   = m4im_block_size_1_lhs - 4 ;
        m4im_block_size_1_rhs   = m4im_block_size_rhs * 3   ;
        m4im_block_size_2_rhs   = m4im_block_size_1_rhs - 4 ;
        m4im_block_size_1_lhs_1 = m4im_block_size_1_lhs     ;
        m4im_block_size_1_rhs_1 = m4im_block_size_1_rhs     ;
        vector<float> mode_4_initial_function_lhs(m4im_block_size_1_lhs)            ;
        vector<float> mode_4_initial_function_rhs(m4im_block_size_1_rhs)            ;
        vector<float> mode_4_calculating_function_lhs(m4im_block_size_1_lhs, 0)     ;
        vector<float> mode_4_calculating_function_rhs(m4im_block_size_1_rhs, 0)     ;
        vector<float> mode_4_calculating_function_lhs_dy(m4im_block_size_1_lhs, 0)  ;
        vector<float> mode_4_calculating_function_rhs_dy(m4im_block_size_1_rhs, 0)  ;
        vector<float> mode_4_calculating_function_lhs_1(    3000, 0);
        vector<float> mode_4_calculating_function_rhs_1(    3000, 0);
        vector<float> mode_4_calculating_function_lhs_1_dy( 3000, 0);
        vector<float> mode_4_calculating_function_rhs_1_dy( 3000, 0);
        vector<float> mode_4_final_function_lhs(            3000, 0);
        vector<float> mode_4_final_function_rhs(            3000, 0);
        vector<float> mode_4_final_function_lhs_dx(         3000, 0);
        vector<float> mode_4_final_function_rhs_dx(         3000, 0);
        vector<float> mode_4_final_function_lhs_dy(         3000, 0);
        vector<float> mode_4_final_function_rhs_dy(         3000, 0);
        vector<float> mode_4_final_function_all_dx(    30006006, 0);
        vector<float> mode_4_final_function_all_dy(    30006006, 0);
        vector<float> mode_4_final_function_all(       30006006, 0);
        for (vector<float>::size_type i = 0; i < m4im_block_size_1_lhs;) {
            cout << "\u001b[32mLHS BLOCK " << i / 3 << "\u001b[32m, SEGMENT " << i % 3 + 1 << " \u001b[32m(CONSTANT)  : ";
            cin  >> mode_4_initial_function_lhs[i];
            cout << "\u001b[0mLHS BLOCK "  << i / 3 << "\u001b[0m, SEGMENT "  << i % 3 + 2 << " \u001b[0m(POWER OF X): ";
            cin  >> mode_4_initial_function_lhs[i + 1];
            cout << "LHS BLOCK " << i / 3 << ", SEGMENT " << i % 3 + 3 << " (POWER OF Y): ";
            cin  >> mode_4_initial_function_lhs[i + 2];
            mode_4_calculating_function_lhs[i]        = mode_4_initial_function_lhs[i];
            mode_4_calculating_function_lhs[i + 1]    = mode_4_initial_function_lhs[i + 1];
            mode_4_calculating_function_lhs[i + 2]    = mode_4_initial_function_lhs[i + 2];
            mode_4_calculating_function_lhs_dy[i]     = mode_4_calculating_function_lhs[i];
            mode_4_calculating_function_lhs_dy[i + 1] = mode_4_calculating_function_lhs[i + 1];
            mode_4_calculating_function_lhs_dy[i + 2] = mode_4_calculating_function_lhs[i + 2];
            i = i + 3;
        }
        for (vector<float>::size_type i = 0; i < m4im_block_size_1_rhs;) {
            cout << "\u001b[32mRHS BLOCK " << i / 3 << "\u001b[32m, SEGMENT " << i % 3 + 1 << " \u001b[32m(CONSTANT)  : ";
            cin  >> mode_4_initial_function_rhs[i];
            cout << "\u001b[0mRHS BLOCK "  << i / 3 << "\u001b[0m, SEGMENT "  << i % 3 + 2 << " \u001b[0m(POWER OF X): ";
            cin  >> mode_4_initial_function_rhs[i + 1];
            cout << "RHS BLOCK " << i / 3 << ", SEGMENT " << i % 3 + 3 << " (POWER OF Y): ";
            cin  >> mode_4_initial_function_rhs[i + 2];
            mode_4_calculating_function_rhs[i]        = mode_4_initial_function_rhs[i];
            mode_4_calculating_function_rhs[i + 1]    = mode_4_initial_function_rhs[i + 1];
            mode_4_calculating_function_rhs[i + 2]    = mode_4_initial_function_rhs[i + 2];
            mode_4_calculating_function_rhs_dy[i]     = mode_4_calculating_function_rhs[i];
            mode_4_calculating_function_rhs_dy[i + 1] = mode_4_calculating_function_rhs[i + 1];
            mode_4_calculating_function_rhs_dy[i + 2] = mode_4_calculating_function_rhs[i + 2];
            i = i + 3;
        }
        cout << "SHOWING IMPUTED FUNCTIONS:\n"  ;
        cout << "SIMPLE MODE        (0)\n"      ;
        cout << "NORMAL MODE        (1)\n"      ;
        cout << "IMPUT YOUR OPTIONS: "          ;
        cin  >> m4_1_im    ;
        while (m4_1_im == 0 && holydogshit_lhs < m4im_block_size_1_lhs + 3) {
            cout << "LHS BLOCK " << holydogshit_lhs / 3 - 1 << ", (" << mode_4_initial_function_lhs[holydogshit_lhs - 3] << "," << mode_4_initial_function_lhs[holydogshit_lhs - 2] << "," << mode_4_initial_function_lhs[holydogshit_lhs - 1] << ")\n";
            holydogshit_lhs = holydogshit_lhs + 3;
            if (holydogshit_lhs < m4im_block_size_1_lhs + 3 && holydogshit_lhs > m4im_block_size_1_lhs) {
                cout << " = \n";
            }
        }
        while (m4_1_im == 0 && holydogshit_rhs < m4im_block_size_1_rhs + 3) {
            cout << "RHS BLOCK " << holydogshit_rhs / 3 - 1 << ", (" << mode_4_initial_function_rhs[holydogshit_rhs - 3] << "," << mode_4_initial_function_rhs[holydogshit_rhs - 2] << "," << mode_4_initial_function_rhs[holydogshit_rhs - 1] << ")\n";
            holydogshit_rhs = holydogshit_rhs + 3;
        }
        while (m4_1_im == 1 && holydogshit_lhs < m4im_block_size_1_lhs + 3) {
            cout << "LHS " << mode_4_initial_function_lhs[holydogshit_lhs - 3] << "*(x^" << mode_4_initial_function_lhs[holydogshit_lhs - 2] << ")*(y^" << mode_4_initial_function_lhs[holydogshit_lhs - 1] << ")";
            if (holydogshit_lhs < m4im_block_size_2_lhs + 3) {
                cout << " + ";
            }
            else {
                cout << " = ";
            }
            holydogshit_lhs = holydogshit_lhs + 3;
        }
        while (m4_1_im == 1 && holydogshit_rhs < m4im_block_size_1_rhs + 3) {
            cout << "LHS " << mode_4_initial_function_rhs[holydogshit_rhs - 3] << "*(x^" << mode_4_initial_function_rhs[holydogshit_rhs - 2] << ")*(y^" << mode_4_initial_function_rhs[holydogshit_rhs - 1] << ")";
            if (holydogshit_rhs < m4im_block_size_2_rhs + 3) {
                cout << " + ";
            }
            else {
                cout << "\n";
            }
            holydogshit_rhs = holydogshit_rhs + 3;
        }
        while (m4_1_im != 0 && m4_1_im != 1) {
            cout << "THIS OPTION DOES NOT EXIST, FUCK OFF.\n";
            cout << "Re-enter your option: ";
            cin  >> m4_1_im;
        }
        cout << "EDIT? (YES = 0, NO = 1): ";
        cin  >> m4_2_im;
        while (m4_2_im == 0 && m4_2_im_loop == 0) {
            methamphetamine = 0;
            m4_2_im_side = 3;
            cout << "WHICH SIDE DO YOU WANT TO EDIT (LHS = 0, RHS = 1): ";
            cin  >> m4_2_im_side;
            cout << "WHICH BLOCK DO YOU WANT TO EDIT (ENTER BLOCK 0~N): ";
            cin  >> m4_2_im_b;
            cout << "WHICH SEGMENT DO YOU WANT TO EDIT (ENTER SEGMENT 1~3): ";
            cin  >> m4_2_im_s;
            m4_2_im_bs = m4_2_im_b * 3 + m4_2_im_s;
            while (m4_2_im_side == 0 && methamphetamine == 0) {
                cout << "EDITING DATA AT SIDE " << display_mode_4_side[m4_2_im_side] << ", BLOCK " << m4_2_im_b << ", SEGMENT " << m4_2_im_s << "\n";
                cout << "ORIGINAL DATA: " << mode_4_initial_function_lhs[m4_2_im_bs - 1] << "\n";
                cout << "EDITING TO: ";
                cin  >> mode_4_initial_function_lhs[m4_2_im_bs - 1];
                methamphetamine = 69;
            }
            while (m4_2_im_side == 1 && methamphetamine == 0) {
                cout << "EDITING DATA AT SIDE " << display_mode_4_side[m4_2_im_side] << ", BLOCK " << m4_2_im_b << ", SEGMENT " << m4_2_im_s << "\n";
                cout << "ORIGINAL DATA: " << mode_4_initial_function_rhs[m4_2_im_bs - 1] << "\n";
                cout << "EDITING TO: ";
                cin  >> mode_4_initial_function_rhs[m4_2_im_bs - 1];
                methamphetamine = 70;
            }
            cout << "CONTINUE EDIT? (YES = 0, NO = 1): ";
            cin  >> m4_2_im_loop;   
        }
//CONVERTSION SEGMENT
        cout << "CALCULATING...\n";
        for (vector<float>::size_type i = 0; i < m4im_block_size_1_lhs;) { //LINE 251
            mode_4_calculating_function_lhs[i]    = mode_4_initial_function_lhs[i] * mode_4_initial_function_lhs[i + 1];
            mode_4_calculating_function_lhs_dy[i] = mode_4_initial_function_lhs[i] * mode_4_initial_function_lhs[i + 2];
            i = i + 3;
        }
        for (vector<float>::size_type i = 0; i < m4im_block_size_1_rhs;) {
            mode_4_calculating_function_rhs[i]    = mode_4_initial_function_rhs[i] * mode_4_initial_function_rhs[i + 1];
            mode_4_calculating_function_rhs_dy[i] = mode_4_initial_function_rhs[i] * mode_4_initial_function_rhs[i + 2];
            i = i + 3;
        }
        cout << "IN WHICH MODE SHALL THE DATA BE SHOWN?\n";
        cout << "SIMPLE MODE        (0)\n";
        cout << "NORMAL MODE        (1)\n"; //UNFINISHED
        cout << "IMPUT YOUR OPTIONS: ";
        cin  >> m4_3_im;
        while (m4_3_im == 0 && holydogshit_output_lhs < m4im_block_size_1_lhs + 3) {
            cout << "LHS BLOCK " << holydogshit_output_lhs / 3 - 1 <<  ", (" << mode_4_calculating_function_lhs[holydogshit_output_lhs - 3]    << "," << mode_4_calculating_function_lhs[holydogshit_output_lhs - 2] - 1 << "," << mode_4_calculating_function_lhs[holydogshit_output_lhs - 1]        << ")\n";
            cout << "LHS BLOCK " << holydogshit_output_lhs / 3 - 1 << "M, (" << mode_4_calculating_function_lhs_dy[holydogshit_output_lhs - 3] << "," << mode_4_calculating_function_lhs_dy[holydogshit_output_lhs - 2]  << "," << mode_4_calculating_function_lhs_dy[holydogshit_output_lhs - 1] - 1 << ")\n";
            mode_4_calculating_function_lhs_1[holydogshit_output_lhs - 3]    = mode_4_calculating_function_lhs[holydogshit_output_lhs - 3]          ;
            mode_4_calculating_function_lhs_1[holydogshit_output_lhs - 2]    = mode_4_calculating_function_lhs[holydogshit_output_lhs - 2] - 1      ;
            mode_4_calculating_function_lhs_1[holydogshit_output_lhs - 1]    = mode_4_calculating_function_lhs[holydogshit_output_lhs - 1]          ;
            mode_4_calculating_function_lhs_1_dy[holydogshit_output_lhs - 3] = mode_4_calculating_function_lhs_dy[holydogshit_output_lhs - 3]       ;
            mode_4_calculating_function_lhs_1_dy[holydogshit_output_lhs - 2] = mode_4_calculating_function_lhs_dy[holydogshit_output_lhs - 2]       ;
            mode_4_calculating_function_lhs_1_dy[holydogshit_output_lhs - 1] = mode_4_calculating_function_lhs_dy[holydogshit_output_lhs - 1] - 1   ;
            holydogshit_output_lhs = holydogshit_output_lhs + 3;
            if (holydogshit_output_lhs <= m4im_block_size_1_lhs + 3 && holydogshit_output_lhs > m4im_block_size_1_lhs) {
                cout << " = \n";
            }
        }
        while (m4_3_im == 0 && holydogshit_output_rhs < m4im_block_size_1_rhs + 3) {
            cout << "RHS BLOCK " << holydogshit_output_rhs / 3 - 1 <<  ", (" << mode_4_calculating_function_rhs[holydogshit_output_rhs - 3]    << "," << mode_4_calculating_function_rhs[holydogshit_output_rhs - 2] - 1 << "," << mode_4_calculating_function_rhs[holydogshit_output_rhs - 1]        << ")\n";
            cout << "RHS BLOCK " << holydogshit_output_rhs / 3 - 1 << "M, (" << mode_4_calculating_function_rhs_dy[holydogshit_output_rhs - 3] << "," << mode_4_calculating_function_rhs_dy[holydogshit_output_rhs - 2]  << "," << mode_4_calculating_function_rhs_dy[holydogshit_output_rhs - 1] - 1 << ")\n";
            mode_4_calculating_function_rhs_1[holydogshit_output_rhs - 3]    = mode_4_calculating_function_rhs[holydogshit_output_rhs - 3]          ;
            mode_4_calculating_function_rhs_1[holydogshit_output_rhs - 2]    = mode_4_calculating_function_rhs[holydogshit_output_rhs - 2] - 1      ;
            mode_4_calculating_function_rhs_1[holydogshit_output_rhs - 1]    = mode_4_calculating_function_rhs[holydogshit_output_rhs - 1]          ;
            mode_4_calculating_function_rhs_1_dy[holydogshit_output_rhs - 3] = mode_4_calculating_function_rhs_dy[holydogshit_output_rhs - 3]       ;
            mode_4_calculating_function_rhs_1_dy[holydogshit_output_rhs - 2] = mode_4_calculating_function_rhs_dy[holydogshit_output_rhs - 2]       ;
            mode_4_calculating_function_rhs_1_dy[holydogshit_output_rhs - 1] = mode_4_calculating_function_rhs_dy[holydogshit_output_rhs - 1] - 1   ;
            holydogshit_output_rhs = holydogshit_output_rhs + 3;
            if (holydogshit_output_rhs < m4im_block_size_1_rhs + 3 && holydogshit_output_rhs > m4im_block_size_1_rhs) {
                cout << "\n";
            }
        } //DO NOT SHOW RESULT WHEN CONSTANT IS 0
        for (vector<float>::size_type i = 0; i <= 1497;) { //STORAGE 1500 IS FOR THE OPPOSITE HAND SIDE
            mode_4_final_function_rhs_dx[i]        =   mode_4_calculating_function_lhs_1[i]         ;
            mode_4_final_function_rhs_dx[i + 1]    =   mode_4_calculating_function_lhs_1[i + 1]     ;
            mode_4_final_function_rhs_dx[i + 2]    =   mode_4_calculating_function_lhs_1[i + 2]     ;
            mode_4_final_function_rhs_dx[i + 1500] = - mode_4_calculating_function_rhs_1[i]         ;
            mode_4_final_function_rhs_dx[i + 1501] =   mode_4_calculating_function_rhs_1[i + 1]     ;
            mode_4_final_function_rhs_dx[i + 1502] =   mode_4_calculating_function_rhs_1[i + 2]     ;
            mode_4_final_function_lhs_dy[i]        =   mode_4_calculating_function_rhs_1_dy[i]      ;
            mode_4_final_function_lhs_dy[i + 1]    =   mode_4_calculating_function_rhs_1_dy[i + 1]  ;
            mode_4_final_function_lhs_dy[i + 2]    =   mode_4_calculating_function_rhs_1_dy[i + 2]  ;
            mode_4_final_function_lhs_dy[i + 1500] = - mode_4_calculating_function_lhs_1_dy[i]      ;
            mode_4_final_function_lhs_dy[i + 1501] =   mode_4_calculating_function_lhs_1_dy[i + 1]  ;
            mode_4_final_function_lhs_dy[i + 1502] =   mode_4_calculating_function_lhs_1_dy[i + 2]  ;
            i = i + 3;
        }
        while (mode_4_final_function_rhs_dx[m4_cr_0] != 0 && m4_cr_0 <= 1497) {
        cout << "dx: (" << mode_4_final_function_rhs_dx[m4_cr_0] << "," << mode_4_final_function_rhs_dx[m4_cr_0 + 1] << "," << mode_4_final_function_rhs_dx[m4_cr_0 + 2] << ")\n";
        m4_cr_0 = m4_cr_0 + 3;
        }
        while (mode_4_final_function_rhs_dx[m4_cr_1 + 1500] != 0 && m4_cr_1 <= 1497) {
        cout << "dx: (" << mode_4_final_function_rhs_dx[m4_cr_1 + 1500] << "," << mode_4_final_function_rhs_dx[m4_cr_1 + 1501] << "," << mode_4_final_function_rhs_dx[m4_cr_1 + 1502] << ")\n";
        m4_cr_1 = m4_cr_1 + 3;
        }
        while (mode_4_final_function_lhs_dy[m4_cr_2] != 0 && m4_cr_2 <= 1497) {
        cout << "dy: (" << mode_4_final_function_lhs_dy[m4_cr_2] << "," << mode_4_final_function_lhs_dy[m4_cr_2 + 1] << "," << mode_4_final_function_lhs_dy[m4_cr_2 + 2] << ")\n";
        m4_cr_2 = m4_cr_2 + 3;
        }
        while (mode_4_final_function_lhs_dy[m4_cr_3 + 1500] != 0 && m4_cr_3 <= 1497) {
        cout << "dy: (" << mode_4_final_function_lhs_dy[m4_cr_3 + 1500] << "," << mode_4_final_function_lhs_dy[m4_cr_3 + 1501] << "," << mode_4_final_function_lhs_dy[m4_cr_3 + 1502] << ")\n";
        m4_cr_3 = m4_cr_3 + 3;
        }
        while (m4_cr_a <= 2997 && m4_cr_b <= 3000) {
            m4_cr_b = m4_cr_a + 3;
            while (m4_cr_b <= 2997) {
                if (mode_4_final_function_rhs_dx[m4_cr_a + 1] == mode_4_final_function_rhs_dx[m4_cr_b + 1] && mode_4_final_function_rhs_dx[m4_cr_a + 2] == mode_4_final_function_rhs_dx[m4_cr_b + 2]) {
                    mode_4_final_function_all_dx[m4_cr_a * 10000 + m4_cr_b] = mode_4_final_function_rhs_dx[m4_cr_a] + mode_4_final_function_rhs_dx[m4_cr_b];
                    mode_4_final_function_all_dx[m4_cr_a * 10000 + m4_cr_b + 1] = mode_4_final_function_rhs_dx[m4_cr_b + 1];
                    mode_4_final_function_all_dx[m4_cr_a * 10000 + m4_cr_b + 2] = mode_4_final_function_rhs_dx[m4_cr_b + 2];
                    mode_4_final_function_rhs_dx[m4_cr_b] = 0;
                    m4_cr_b = m4_cr_b + 3;
                }
                else {
                    m4_cr_b = m4_cr_b + 3;
                }
            } 
            m4_cr_a = m4_cr_a + 3;
        }
        m4_cr_a = 0;
        while (m4_cr_a <= 2997 && m4_cr_b <= 3000) {
            m4_cr_b = m4_cr_a + 3;
            while (m4_cr_b <= 2997) {
                if (mode_4_final_function_rhs_dx[m4_cr_a + 1] != mode_4_final_function_rhs_dx[m4_cr_b + 1] || mode_4_final_function_rhs_dx[m4_cr_a + 2] != mode_4_final_function_rhs_dx[m4_cr_b + 2]) { //LINE ERROR ?LOGICAL
                    if (mode_4_final_function_rhs_dx[m4_cr_a] != 0 || mode_4_final_function_rhs_dx[m4_cr_b] != 0) {
                        mode_4_final_function_all_dx[3003 + m4_cr_a * 10000 + m4_cr_b] = mode_4_final_function_rhs_dx[m4_cr_b];
                        mode_4_final_function_all_dx[3003 + m4_cr_a * 10000 + m4_cr_b + 1] = mode_4_final_function_rhs_dx[m4_cr_b + 1];
                        mode_4_final_function_all_dx[3003 + m4_cr_a * 10000 + m4_cr_b + 2] = mode_4_final_function_rhs_dx[m4_cr_b + 2];
                        mode_4_final_function_all_dx[3003 + m4_cr_a * 10000] = mode_4_final_function_rhs_dx[m4_cr_a];
                        mode_4_final_function_all_dx[3003 + m4_cr_a * 10000 + 1] = mode_4_final_function_rhs_dx[m4_cr_a + 1];
                        mode_4_final_function_all_dx[3003 + m4_cr_a * 10000 + 2] = mode_4_final_function_rhs_dx[m4_cr_a + 2];
                        m4_cr_b = m4_cr_b + 3;
                    }
                    else {
                        m4_cr_b = m4_cr_b + 3;
                    }
                }
            } 
            m4_cr_a = m4_cr_a + 3;
        }
        m4_cr_a = 0;
        while (m4_cr_a <= 2997 && m4_cr_b <= 3000) {
            m4_cr_b = m4_cr_a + 3;
            while (m4_cr_b <= 2997) {
                if (mode_4_final_function_lhs_dy[m4_cr_a + 1] == mode_4_final_function_lhs_dy[m4_cr_b + 1] && mode_4_final_function_lhs_dy[m4_cr_a + 2] == mode_4_final_function_lhs_dy[m4_cr_b + 2]) {
                    mode_4_final_function_all_dy[m4_cr_a * 10000 + m4_cr_b] = mode_4_final_function_lhs_dy[m4_cr_a] + mode_4_final_function_lhs_dy[m4_cr_b];
                    mode_4_final_function_all_dy[m4_cr_a * 10000 + m4_cr_b + 1] = mode_4_final_function_lhs_dy[m4_cr_b + 1];
                    mode_4_final_function_all_dy[m4_cr_a * 10000 + m4_cr_b + 2] = mode_4_final_function_lhs_dy[m4_cr_b + 2];
                    mode_4_final_function_lhs_dy[m4_cr_b] = 0;
                    m4_cr_b = m4_cr_b + 3;
                }
                else {
                    m4_cr_b = m4_cr_b + 3;
                }
            } 
            m4_cr_a = m4_cr_a + 3;
        }
        m4_cr_a = 0;
        while (m4_cr_a <= 2997 && m4_cr_b <= 3000) {
            m4_cr_b = m4_cr_a + 3;
            while (m4_cr_b <= 2997) {
                if (mode_4_final_function_lhs_dy[m4_cr_a + 1] != mode_4_final_function_lhs_dy[m4_cr_b + 1] || mode_4_final_function_lhs_dy[m4_cr_a + 2] != mode_4_final_function_lhs_dy[m4_cr_b + 2]) {
                    if (mode_4_final_function_lhs_dy[m4_cr_b] != 0) {
                        mode_4_final_function_all_dy[3003 + m4_cr_a * 10000 + m4_cr_b] = mode_4_final_function_lhs_dy[m4_cr_b];
                        mode_4_final_function_all_dy[3003 + m4_cr_a * 10000 + m4_cr_b + 1] = mode_4_final_function_lhs_dy[m4_cr_b + 1];
                        mode_4_final_function_all_dy[3003 + m4_cr_a * 10000 + m4_cr_b + 2] = mode_4_final_function_lhs_dy[m4_cr_b + 2];
                        mode_4_final_function_all_dy[3003 + m4_cr_a * 10000] = mode_4_final_function_lhs_dy[m4_cr_a];
                        mode_4_final_function_all_dy[3003 + m4_cr_a * 10000 + 1] = mode_4_final_function_lhs_dy[m4_cr_a + 1];
                        mode_4_final_function_all_dy[3003 + m4_cr_a * 10000 + 2] = mode_4_final_function_lhs_dy[m4_cr_a + 2];
                        m4_cr_b = m4_cr_b + 3;
                    }
                    else {
                        m4_cr_b = m4_cr_b + 3;
                    }
                }
            } 
            m4_cr_a = m4_cr_a + 3;
        }
        while (m4_cr_c <= 30002997) {
            m4_cr_c = 0;
            while (mode_4_final_function_all_dx[m4_cr_c] == 0) {
                m4_cr_c = m4_cr_c + 3;
            }
            while (mode_4_final_function_all_dx[m4_cr_c] != 0) {
                var_int_a = (mode_4_final_function_all_dx[m4_cr_c + 1]) / 1000;
                var_int_b = (mode_4_final_function_all_dx[m4_cr_c + 1] - var_int_a * 1000) / 100;
                var_int_c = (mode_4_final_function_all_dx[m4_cr_c + 1] - var_int_a * 1000 - var_int_b * 100) / 10;
                var_int_d = (mode_4_final_function_all_dx[m4_cr_c + 1] - var_int_a * 1000 - var_int_b * 100 - var_int_c * 10);
                var_int_e = (mode_4_final_function_all_dx[m4_cr_c + 2]) / 1000;
                var_int_f = (mode_4_final_function_all_dx[m4_cr_c + 2] - var_int_e * 1000) / 100;
                var_int_g = (mode_4_final_function_all_dx[m4_cr_c + 2] - var_int_e * 1000 - var_int_f * 100) / 10;
                var_int_h = (mode_4_final_function_all_dx[m4_cr_c + 2] - var_int_e * 1000 - var_int_f * 100 - var_int_g * 10);
                while (var_int_a > 0) {
                    cout << mode_4_final_function_all_dx[m4_cr_c] << "x" << small_numbers[var_int_a] << small_numbers[var_int_b] << small_numbers[var_int_c] << small_numbers[var_int_d];
                }
                while (var_int_a == 0 && var_int_b > 0) {
                    cout << mode_4_final_function_all_dx[m4_cr_c] << "x" << small_numbers[var_int_b] << small_numbers[var_int_c] << small_numbers[var_int_d];
                }
                while (var_int_a == 0 && var_int_b == 0 && var_int_c > 0) {
                    cout << mode_4_final_function_all_dx[m4_cr_c] << "x" << small_numbers[var_int_c] << small_numbers[var_int_d];
                }
                while (var_int_a == 0 && var_int_b == 0 && var_int_c == 0 && var_int_d > 0) {
                    cout << mode_4_final_function_all_dx[m4_cr_c] << "x" << small_numbers[var_int_d];
                }
                while (var_int_e > 0) {
                    cout << "y" << small_numbers[var_int_e] << small_numbers[var_int_f] << small_numbers[var_int_g] << small_numbers[var_int_h] << " + ";
                }
                while (var_int_e == 0 && var_int_f > 0) {
                    cout << "y" << small_numbers[var_int_f] << small_numbers[var_int_g] << small_numbers[var_int_h] << " + ";
                }
                while (var_int_e == 0 && var_int_f == 0 && var_int_g > 0) {
                    cout << "y" << small_numbers[var_int_g] << small_numbers[var_int_h] << " + ";
                }
                while (var_int_e == 0 && var_int_f == 0 && var_int_g == 0 && var_int_h > 0) {
                    cout << "y" << small_numbers[var_int_h] << " + ";
                }
                m4_cr_c = m4_cr_c + 3;
            }
        }
    }
}
