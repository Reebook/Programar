#include <iostream>
using namespace std;
#include <ctime>

void comparaFecha(int dia,int mes){
   time_t tSac = time(NULL);  // instante actual

   struct tm* pt1 = localtime(&tSac);

   cout << "dd-mm-aaaa: " << pt1->tm_mday << "-" << pt1->tm_mon+1 << "-"
                          << pt1->tm_year+1900 << endl;
   if(dia==pt1->tm_mday&&mes==pt1->tm_mon+1 ){
   cout<<"igual fecha"<<endl;
   }
   else{
   cout<<" fecha diferentes"<<endl;
   }


}

int main() {   
//-------------------------------------------------------------------------------
   int dia2=0,dia=0,mes2=0,mes=0,año=0,a=1;
while(a==1){
cout<<"digite dia"<<endl;cin>>dia;
cout<<"digite mes"<<endl;cin>>mes;
cout<<"digite anno"<<endl;cin>>año;
	for(int i=0;i<=90;i++){
		if(dia==30||dia==60||dia==90||){
		mes++;
		
		}
		dia++;
	}
	if(mes>12&&mes<24){
		mes=(mes-12);
	}
	if(mes>24){
		mes=(mes-24);
	}
	dia2=(dia-1)%90;
	mes2=mes;
	cout<<"fecha         "<<dia2<<"/"<<mes2<<"/"<<año<<endl;
	 comparaFecha(dia2,mes2);
}
   system("pause");
   return 0;
}