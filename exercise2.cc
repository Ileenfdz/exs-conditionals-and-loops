#include <iostream>

using namespace std;

int main(){

    int num;

    cout<<"Dime un número random: ";
    cin>>num;

    if(num > 10){
        cout<<"Es mayor que 10"<<endl;
    }else{
        cout<<"Es menor que 10"<<endl;
    }

	system ("PAUSE");
	return 0;

}