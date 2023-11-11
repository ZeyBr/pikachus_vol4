#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    double Arr[N];  
    //iniclize array
    srand(time(NULL)) ;
    for (size_t i = 0; i < N; i++)
    {
        Arr[i] = rand();
}
    //print array
    for (size_t i =0 ; i < N; i++)
    {
        cout<< "0x" << &Arr[i] << endl << "Arr["<<i<<"]=" << Arr[i] << endl;
    }
     cout << sizeof(Arr) << endl;  

 return 0;
}