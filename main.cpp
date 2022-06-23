#include <bits/stdc++.h>
#include <fstream>
#include <chrono>
using namespace std::chrono;
using namespace std;

// Sorts array a[0..n-1] using Cocktail sort
void CocktailSort(int a[], int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;
    int temp;
    while (swapped==true)
    {
        // restablecer Flag de swap al entrar en el bucle,
        //porque podría ser cierto desde una iteración anterior.
        swapped = false;
        // bucle de izquierda a derecha igual que la ordenación de burbujas
        for (int i = start; i < end; ++i)
        {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
            }
        }
        //si no se mueve nada, entonces el array se ordena.
        if (!swapped)
            break;
        // de lo contrario, restablece la bandera intercambiada para
        // que pueda ser utilizada en la siguiente etapa
        swapped = false;
        // retroceder el punto final en uno, porque el elemento del
        // final está en su lugar correcto
        --end;
        // de derecha a izquierda, haciendo la misma comparación que
        // en la etapa anterior
        for (int i = end - 1; i >= start; --i)
        {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
            }
        }
        // aumentar el punto de partida, ya que la última etapa habría
        // desplazado el siguiente número más pequeño al lugar que le corresponde.
        ++start;
    }
}
// Driver code
int main()
{
    auto f = []() -> int { return rand() % 10; };
    int x;
    ifstream inFile1;
    ifstream inFile2;
    ifstream inFile3;
    ifstream inFile4;
    ifstream inFile5;
    ifstream inFile6;
    ifstream inFile7;
    ifstream inFile8;
    ifstream inFile9;
    ifstream inFile10;
    ifstream inFile11;
    ifstream inFile12;
    ifstream inFile13;
    ifstream inFile14;
    ifstream inFile15;
    inFile1.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\100.txt");
    if (!inFile1) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile2.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\1000.txt");
    if (!inFile2) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile3.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\2000.txt");
    if (!inFile3) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile4.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\3000.txt");
    if (!inFile4) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile5.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\4000.txt");
    if (!inFile5) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile6.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\5000.txt");
    if (!inFile6) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile7.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\6000.txt");
    if (!inFile7) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile8.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\7000.txt");
    if (!inFile8) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile9.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\8000.txt");
    if (!inFile9) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile10.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\9000.txt");
    if (!inFile10) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile11.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\10000.txt");
    if (!inFile11) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile12.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\20000.txt");
    if (!inFile12) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile13.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\30000.txt");
    if (!inFile13) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile14.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\40000.txt");
    if (!inFile14) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    inFile15.open("D:\\WorkSpaces\\C++\\5th semester\\FLP\\CocktailSort-CPP\\data\\50000.txt");
    if (!inFile15) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    int* a1 = new int[100];
    int* a2 = new int[1000];
    int* a3 = new int[2000];
    int* a4 = new int[3000];
    int* a5 = new int[4000];
    int* a6 = new int[5000];
    int* a7 = new int[6000];
    int* a8 = new int[7000];
    int* a9 = new int[8000];
    int* a10 = new int[9000];
    int* a11 = new int[10000];
    int* a12 = new int[20000];
    int* a13 = new int[30000];
    int* a14 = new int[40000];
    int* a15 = new int[50000];
    if(inFile1.is_open()){
        int i = 0;
        int x;
        while (inFile1 >> x){
            a1[i++] = x;
        }
    }
    inFile1.close();
    if(inFile2.is_open()){
        int i = 0;
        int x;
        while (inFile2 >> x){
            a2[i++] = x;
        }
    }
    inFile2.close();
    if(inFile3.is_open()){
        int i = 0;
        int x;
        while (inFile3 >> x){
            a3[i++] = x;
        }
    }
    inFile3.close();
    if(inFile4.is_open()){
        int i = 0;
        int x;
        while (inFile4 >> x){
            a4[i++] = x;
        }
    }
    inFile4.close();
    if(inFile5.is_open()){
        int i = 0;
        int x;
        while (inFile5 >> x){
            a5[i++] = x;
        }
    }
    inFile5.close();
    if(inFile6.is_open()){
        int i = 0;
        int x;
        while (inFile6 >> x){
            a6[i++] = x;
        }
    }
    inFile6.close();
    if(inFile7.is_open()){
        int i = 0;
        int x;
        while (inFile7 >> x){
            a7[i++] = x;
        }
    }
    inFile7.close();
    if(inFile8.is_open()){
        int i = 0;
        int x;
        while (inFile8 >> x){
            a8[i++] = x;
        }
    }
    inFile8.close();
    if(inFile9.is_open()){
        int i = 0;
        int x;
        while (inFile9 >> x){
            a9[i++] = x;
        }
    }
    inFile9.close();
    if(inFile10.is_open()){
        int i = 0;
        int x;
        while (inFile10 >> x){
            a10[i++] = x;
        }
    }
    inFile10.close();
    if(inFile11.is_open()){
        int i = 0;
        int x;
        while (inFile11 >> x){
            a11[i++] = x;
        }
    }
    inFile11.close();
    if(inFile12.is_open()){
        int i = 0;
        int x;
        while (inFile12 >> x){
            a12[i++] = x;
        }
    }
    inFile12.close();
    if(inFile13.is_open()){
        int i = 0;
        int x;
        while (inFile13 >> x){
            a13[i++] = x;
        }
    }
    inFile13.close();
    if(inFile14.is_open()){
        int i = 0;
        int x;
        while (inFile14 >> x){
            a14[i++] = x;
        }
    }
    inFile14.close();
    if(inFile15.is_open()){
        int i = 0;
        int x;
        while (inFile15 >> x){
            a15[i++] = x;
        }
    }
    inFile15.close();
    auto start = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a1), 100);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "100: "<< duration.count() << " microseconds" << endl;
    //printArray(reinterpret_cast<int *>(a1), 100);
    auto start2 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a2), 1000);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "1000: "<< duration2.count() << " microseconds" << endl;
    auto start3 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a3), 2000);
    auto stop3 = high_resolution_clock::now();
    auto duration3 = duration_cast<microseconds>(stop3 - start3);
    cout << "2000: "<< duration3.count() << " microseconds" << endl;
    auto start4 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a4), 3000);
    auto stop4 = high_resolution_clock::now();
    auto duration4 = duration_cast<microseconds>(stop4 - start4);
    cout << "3000: "<< duration4.count() << " microseconds" << endl;
    auto start5 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a5), 4000);
    auto stop5 = high_resolution_clock::now();
    auto duration5 = duration_cast<microseconds>(stop5 - start5);
    cout << "4000: "<< duration5.count() << " microseconds" << endl;
    auto start6 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a6), 5000);
    auto stop6 = high_resolution_clock::now();
    auto duration6 = duration_cast<microseconds>(stop6 - start6);
    cout << "5000: "<< duration6.count() << " microseconds" << endl;
    auto start7 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a7), 6000);
    auto stop7 = high_resolution_clock::now();
    auto duration7 = duration_cast<microseconds>(stop7 - start7);
    cout << "6000: "<< duration7.count() << " microseconds" << endl;
    auto start8 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a8), 7000);
    auto stop8 = high_resolution_clock::now();
    auto duration8 = duration_cast<microseconds>(stop8 - start8);
    cout << "7000: "<< duration8.count() << " microseconds" << endl;
    auto start9 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a9), 8000);
    auto stop9 = high_resolution_clock::now();
    auto duration9 = duration_cast<microseconds>(stop9 - start9);
    cout << "8000: "<< duration9.count() << " microseconds" << endl;
    auto start10 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a10), 9000);
    auto stop10 = high_resolution_clock::now();
    auto duration10 = duration_cast<microseconds>(stop10 - start10);
    cout << "9000: "<< duration10.count() << " microseconds" << endl;
    auto start11 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a11), 10000);
    auto stop11 = high_resolution_clock::now();
    auto duration11 = duration_cast<microseconds>(stop11 - start11);
    cout << "10000: "<< duration11.count() << " microseconds" << endl;
    auto start12 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a12), 20000);
    auto stop12 = high_resolution_clock::now();
    auto duration12 = duration_cast<microseconds>(stop12 - start12);
    cout << "20000: "<< duration12.count() << " microseconds" << endl;
    auto start13 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a13), 30000);
    auto stop13 = high_resolution_clock::now();
    auto duration13 = duration_cast<microseconds>(stop13 - start13);
    cout << "30000: "<< duration13.count() << " microseconds" << endl;
    auto start14 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a14), 40000);
    auto stop14 = high_resolution_clock::now();
    auto duration14 = duration_cast<microseconds>(stop14 - start14);
    cout << "40000: "<< duration14.count() << " microseconds" << endl;
    auto start15 = high_resolution_clock::now();
    CocktailSort(reinterpret_cast<int *>(a15), 50000);
    auto stop15 = high_resolution_clock::now();
    auto duration15 = duration_cast<microseconds>(stop15 - start15);
    cout << "50000: "<< duration15.count() << " microseconds" << endl;
    delete [] a1;
    delete [] a2;
    delete [] a3;
    delete [] a4;
    delete [] a5;
    delete [] a6;
    delete [] a7;
    delete [] a8;
    delete [] a9;
    delete [] a10;
    delete [] a11;
    delete [] a12;
    delete [] a13;
    delete [] a14;
    delete [] a15;
    return 0;
}