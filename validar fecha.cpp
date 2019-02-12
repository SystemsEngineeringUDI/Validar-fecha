#include <iostream>
using namespace std;
int main(){
int a,mes,dia,bis=0;
cout<<"digite el año\n";
cin>>a;
cout<<"Digite el mes\n";
cin>>mes;
cout<<"Digite el dia\n";
cin>>dia;
if((a%400)==0){
	bis=1;	
}
else{
	if((a%4)==0 && (a%100)!=0)
	{
		bis=1;
	}
}

if(mes<=12){
	if(bis==1 && mes==2 ){
		if(dia<=29){
			cout<<"Corecto";
		}
		else{
			cout<<"incorrecto";
		}
	}else{
		
		if(mes==2){
			if(dia<=28){
				cout<<"Correcto";
			}
			else{
			cout<<"incorrecto";
			}
		}else{
		
		if(mes==8){
			if(dia<=31){
				cout<<"Correcto";
			}
			else{
			cout<<"incorrecto";
			}
		}else{
			if((mes%2)==0){
				if(dia<=30){
					cout<<"Corecto";
				}else{
					cout<<"incorrecto";
				}
			}else{
				if(dia<=31){
					cout<<"Correcto";
				}else{
					cout<<"incorrecto";
				}
			}
		}
	}
	}
}
else{
		cout<<"incorrecto";
	}


}
