#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   int n;
   
   cout<<"ingrese un numero:"<<endl;
   cin>>n;
   cout<<endl;
   
   for(int i=1;i<=10;i++){
       cout<<n<<" x "<<i<<" = "<<n*i<<endl;
       
   }

	return 0;
}
