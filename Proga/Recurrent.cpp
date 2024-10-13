//#include <iostream>
//using namespace std;
//
//void calc_first(double term1, double term2, int numberOfTerms) {
//    double currentTerm;
//    for (int i = 0; i < numberOfTerms; i++) {
//        if (i == 0) {
//            cout << term1 << ' ';
//            continue;
//        }
//        if (i == 1) {
//            cout << term2 << ' ';
//            continue;
//        }
//        currentTerm = term2 / 2 + term1 / 3;
//        cout << currentTerm << ' ';
//
//        term1 = term2;
//        term2 = currentTerm;
//    }
//}
//
//int first_task() {
//    int numberOfTerms;
//    double term1 = 0.5, term2 = 0.4;
//    cout << "Enter number of terms: ";
//    cin >> numberOfTerms;
//    if (numberOfTerms > 0 && cin) {
//        calc_first(term1, term2, numberOfTerms);
//    } else {
//        cout << "\nError\n";
//        return -1;
//    }
//
//    return 0;
//}
//
//double calc_eight(double x, double eps) {
//    const short maxCountOfIterations = 100;
//    double sum = 1.0;
//    double term = 1.0;
//    int n = 1;
//
//    while (abs(term) > eps) {
//        term *= -x;
//        sum += term;
//        n++;
//
//        if (n > eps && n > maxCountOfIterations) {
//            cout << "The series diverges for the value of x\n";
//            return NAN;
//        }
//    }
//    return sum;
//}
//
//int eight_task() {
//    double x, eps;
//    cout << "Enter the value of x: ";
//    cin >> x;
//
//    if (!cin) {
//        cout << "\nError\n";
//        return -1;
//    }
//
//    cout << "Enter the value of eps: ";
//    cin >> eps;
//
//    if (!cin) {
//        cout << "\nError\n";
//        return -1;
//    }
//
//    double result = calc_eight(x, eps);
//
//    if (!isnan(result)) {
//        cout << "The sum of the series = " << result << endl;
//    } else {
//        cout << "\nError\n";
//        return -1;
//    }
//
//    return 0;
//}
//
//double calc_eleventh(double x, double eps) {
//    const short maxCountOfIterations = 100;
//    double sum = x;
//    double term = x;
//    int n = 1;
//
//    while (abs(term) > eps) {
//        term *= -(x * x);
//        sum += term / (2 * n + 1);
//        n++;
//
//        if(n > eps && n > maxCountOfIterations) {
//            cout << "The series diverges for the value of x\n";
//            return NAN;
//        }
//    }
//    return sum;
//}
//
//int eleventh_task() {
//    double x, eps;
//
//    cout << "Enter the value of x: ";
//    cin >> x;
//    if  (!cin) {
//        cout << "\nError\n";
//        return -1;
//    }
//
//    cout << "Enter the value of eps: ";
//    cin >> eps;
//    if (!cin) {
//        cout << "\nError\n";
//        return -1;
//    }
//
//    double result = calc_eleventh(x, eps);
//
//    if(!isnan(result)) {
//        cout << "The sum of the series = " << result << "\n";
//    } else {
//        cout << "\nError\n";
//        return -1;
//    }
//    return 0;
//}
//
//int main() {
//    return eleventh_task();
//}
