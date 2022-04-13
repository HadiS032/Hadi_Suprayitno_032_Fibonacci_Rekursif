//Hadi Suprayitno 21091397032

#include <iostream>
using namespace std;

int main()
{

    //Inisialisasi Variabel
    int nilai, fib_n, fib_n1=1, fib_n2=0;

	//perintah input nilai 
    cout<<"Input bilangan fibonaci ke- : ";
	cin>>nilai;

	//Rumus Fibonaci
    for (int looping=1; looping<nilai; looping++){
        fib_n=fib_n1+fib_n2;
        fib_n2=fib_n1;
        fib_n1=fib_n;
    }
    
    //menampilkan hasil fibonaci
    cout<<"hasil bilangan Fibonaci	: ";
    cout<<fib_n;
    
    return 0;
}
