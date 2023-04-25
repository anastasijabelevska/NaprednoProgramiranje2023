#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    string filename, input_text;
    ofstream file_writer;

    
    cout << " ime na fajlot: ";
    cin >> filename;

    
    file_writer.open(filename.c_str(), ios::app);

    
    if (!file_writer.is_open()) {
        cerr << "Fajlot ne mozi da se otvori" << endl;
        return 1;
    }

    
    cout << "Vnesi tekst: ";
    getline(cin >> ws, input_text);

    
    file_writer << input_text << endl;

    
    file_writer.close();

    return 0;
}
