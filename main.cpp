#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    std::ifstream infile("RZEDNE.txt");

    ofstream myfile;
    myfile.open ("WYNIK.txt", ios::out | ios::app | ios::binary);

    float sum = 0;

    for(std::string line; std::getline(infile, line); )
    {
        float a, b, c;

        if (!(std::istringstream(line) >> a >> b >> c))
        {
            std::cerr << "Skipping unparsable line '" << line << "'\n";
            continue;
        }

        sum = a + b + c;
        cout << "| X: " << a << "\t" << "| Y: " << b << "\t" << "| Z: " << c << "\t" << "\t" << "SUMA: " << sum << endl << endl;
        myfile << "X: " << a << "\t" << " Y: " << b << "\t" << " Z: " << c << "\t" << "\t" << "SUMA: " << sum << endl << endl;
    }

    system ("PAUSE");
    return 0;
}
