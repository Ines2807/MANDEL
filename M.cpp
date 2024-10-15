#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int A,B;
	int a,b;
	int x,y;
	int u,v;
	int T,n;
	int t;
	
	cout<< "Veillez entrer le coefficient reel de votre complexe Z(n)\n";
	cin>> a;
	cout<< "Veillez entrer le coefficient imaginaire de votre complexe Z(n)\n";
	cin>> b;
	cout<<"Votre suite est Z(n)="<<a <<"+i"<<b <<"\n";
	cout<< " Entrer 1 si C est un complexe et 2 si C est un reel \n";
	cin>> v;
	
	if(v==1) {
		cout<< "Entrez le coeficient reel de C\n";
		cin>>x;
		cout<< "Entrez le coeficient imaginaire de C\n";
		cin>>y; 
		cout<<"C="<<x <<"+i"<<y <<"\n";  
    }
    
    if(v==2) {
    	cout<<"Entrez la valeur de C\n";
    	cin>>u;
    	cout<< "C="<<u <<"\n";
    }	
  
    
	
	cout<<"Entrez le nombre de complexes que vous voulez afficher\n";
	cin>>n;
	
	if(n==1) {
		cout<<"Z(0)=0\n";
		
		
    }
    if(n==2 & v==2) {
    	cout<<"Z(0)=0\n";
    	T=u;
       	cout<<"Z(1)="<<T <<"\n";
    	
      	
    }

    
    if(n==2 & v==1) {
    	cout<<"Z(0)=0\n";
    	x=x;
    	y=y;
    	cout<<"Z(1)="<<x<<"+i"<<y<<"\n";
    	
    }
    
    
    if(n>2 & v==2) {
    	cout<< "Z(0)=0\n";
    	T=u;
    	cout<<"Z(1)="<<T<<"\n";
    	
    	
    	for(t=2;t<=n-1;t++) {
           A = a * a - b * b + u; 
           B = 2 * a * b ;              
           a = A;
           b = B;
    	
    	cout<<"Z("<<t<<")="<<A <<"+i"<<B <<"\n";	
    		
    		
        }
    
	
    if(n>2 & v==1) {
    	cout<< "Z(0)=0\n";
    	cout<<"Z(1)="<<x<<"+i"<<y<<"\n";
    	
    	
    	for(t=2;t<=n-1;t++) {
    		
           A = a * a - b * b + x; 
           B = 2 * a * b + y;              
           a = A;
           b = B;
    	
    	cout<<"Z("<<t<<")="<<A <<"+i"<<B <<"\n";	
    		
    		
        }    
        	
    		

    }



    
    



	

	return 0;
}
}
