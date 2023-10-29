#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){

    fstream limpar;

    limpar.open("Boi.txt");

    limpar <<"";

    limpar.close();

    return 0;
}
