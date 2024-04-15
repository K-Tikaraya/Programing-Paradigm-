#include <iostream>
using namespace std;

int main() {
	int c=1,p=1;
	int a[6];
	for(int i=0;i<6;i++){
	    cout<<"enter a[i]"<<i;
	    cin>>a[i];
	    cout<<endl;
	}
		for(int i=1;i<6;i++){
		    if((a[i-1]%2==0&&a[i]%2!=0)||(a[i-1]%2!=0&&a[i]%2==0)){
		        c++;
            p=max(c,p);
        }
    
		    
		    else
              c=1;

		        
		    }
		    
		
		     cout<<p<<endl;
		     return 0;


}
		    
