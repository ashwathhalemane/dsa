#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int I;
    double D;
    double sum;
    string S;
    string sr;
    // Read and save an integer, double, and String to your variables.
    cin>>I>>D;
    getline(cin >> ws, S);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout<<i+I<<endl;
    // Print the sum of the double variables on a new line.

    sum  = d+D;

    cout << fixed << setprecision(1) << sum << endl;
    // Concatenate and print the String variables on a new line
    sr=s + S;
    cout<<sr;
    // The 's' variable above should be printed first.

    return 0;
