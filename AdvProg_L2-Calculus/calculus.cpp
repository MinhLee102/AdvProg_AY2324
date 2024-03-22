#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/

//double giaiThua(double n){
//    if (n == 1)
//        return n;
//    else
//        return n * giaiThua(n-1);
//}

double myCos(double x)
{
//    double cos = 0;
//    for (int i = 0; i <= 3; i++)
//        cos += pow(-1, i)/giaiThua(2*i) * pow(x, 2*i);
//    return cos;
    return cos(x);
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
//    double sin = 0;
//    for (int i = 0; i <= 3; i++)
//        sin += pow(-1, i)/giaiThua(2*i+1) * pow(x, 2*i+1);
    return sin(x);
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }

    return sqrt(x);
}
