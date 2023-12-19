#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
        double a,i = 0 ;
        double sum = 0 ;
        double sum_of_square ,sd = 0;
        string textline;
        ifstream source ;
        source.open("score.txt");
        while (getline(source,textline))
        {
                a = atof(textline.c_str()) ;
                sum += a;
                sd += pow(a,2);
                i++;
        }
        sum = sum/i ;
        sum_of_square = sqrt((sd/i)-(pow(sum,2))) ;
        source.close() ;
        cout << "Number of data = " << i << "\n";
        cout << setprecision(3);
        cout << "Mean = " << sum << "\n";
        cout << "Standard deviation = " << sum_of_square ;
}