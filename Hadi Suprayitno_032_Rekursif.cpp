//Hadi Suprayitno 21091397032

#include<iostream>
using namespace std;
 
int fib(int nilai )/*inisialisasi variable*/
{
	//kasus dasar
    if (nilai <= 1)
        return nilai;
    //kasus rekrusif
    else
    	return fib(nilai-1) + fib(nilai-2); //Rumus Fibonacci
}
 
int main () {
	
//Inisialisasi Variable
	int input_n;
	
//Perintah Input Nilai
	cout<<"Input Bilangan Finonasi	: ";
	cin>>input_n;
	
// menampilkan hasil fibonaci
	cout<<"Nilai Bilangan Finobaci	: ";
    cout << fib(input_n); 
    return 0;
}
