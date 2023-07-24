#include <iostream>
#include <fstream>

int main() {
    std::ofstream out("out.txt");
    int a = 0, b = 0;
    std::ifstream in("in.txt");

    if(in >> a) { // first array
        std::string *in_1 = new std::string[a];
        in >> in_1[a - 1];
        for (int i = 0; i < a - 1 ; i++) {
            in >> in_1[i];
        }
        in >> b;//second array
        std::string *in_2 = new std::string[b];
        for (int k = 1; k < b; k++) {
            in >> in_2[k];
        }
        in >> in_2[0];

        if (out) {
            out << b << "\n";
            for (int i = 0; i < b; i++) {
                out << in_2[i] << " ";
            }
            out << "\n" << a << "\n";
            for (int i = 0; i < a; i++) {
                out << in_1[i] << " ";
            }
        }

        in.close();
        out.close();


        delete[] in_1;
        delete[] in_2;
    }else std::cout << "file dosnt open!";


    return 0;
}
