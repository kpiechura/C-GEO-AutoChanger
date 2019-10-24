#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::vector<double>numbers;
    double number;

    ifstream File;
    File.open("RZEDNE.txt");

    ofstream myfile;
    myfile.open ("WYNIK.txt", ios::out | ios::app | ios::binary);

    int i=0;

    bool switcher=false;

    while(File >> number)
    {
        if(i==3)
        {
            cout << "Suma: " << numbers[0] + numbers[1] + numbers[2] << endl;
            myfile << "Suma: " << numbers[0] + numbers[1] + numbers[2] << endl;
            i=0;
            switcher=true;

            numbers.empty();
            numbers.erase(numbers.begin(),numbers.end());

        }

        numbers.push_back(number);
        ++i;


    }







    return 0;
}
