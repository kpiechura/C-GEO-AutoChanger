#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));

    std::ifstream infile("RZEDNE.txt");

    ofstream myfile;
    myfile.open ("WYNIK.txt", ios::out | ios::app | ios::binary);

    double sum = 0;

    for(std::string line; std::getline(infile, line); )
    {
        //int los =(std::rand() % 11) + 0;

        double los = 1.1 + static_cast <double> (rand()) /( static_cast <double> (RAND_MAX/(12.5-1.1))); //double random number

        double a, b, c;

        if (!(std::istringstream(line) >> a >> b >> c))
        {
            std::cerr << "Skipping unparsable line '" << line << "'\n";
            continue;
        }

        sum = a + b + c;
        cout << "| X: " << a << "\t" << "| Y: " << b << "\t" << "| Z: " << c << "\t" << "\t" << "| SUMA: " << sum << "\t" << "| LOS: " << los << "\t" << "| SUMA + LOS: " << sum + los << endl << endl;
        myfile << "X: " << a << "\t" << " Y: " << b << "\t" << " Z: " << c << "\t" << "LOS: " << los << "\t" << "SUMA: " << sum << "\t" << "| SUMA + LOS: " << sum + los << endl << endl;
    }

    system ("PAUSE");
    return 0;
}
