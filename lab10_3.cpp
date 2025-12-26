#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ifstream source;
    source.open("score.txt");

    vector<double> scores;
    string line;

    while (getline(source, line))
    {
        scores.push_back(stod(line));
    }

    double n = scores.size();
    double sum = 0.0;
    double sqt_sum = 0.0;
    double mean, dev;

    for (double x : scores)
    {
        sum += x;
    }

    mean = sum / n;

    for (double x : scores)
    {
        sqt_sum += pow(x - mean, 2);
    }

    dev = sqrt(sqt_sum / n);

    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << dev;
}