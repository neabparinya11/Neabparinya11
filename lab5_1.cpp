#include<iostream>
using namespace std;

int main(){
    int x,y,i;
    cout << "Enter an integer: ";
    cin>>x;
    	while(x!=0){
    		cout << "Enter an integer: ";
            cin>>x;
            if(x==0){
            	break;
			}
            if(x%2==0){
            	y++;
			}else{
				i++;
			}
		}
	
		cout << "#Even numbers = "<<y<<"\n";
        cout << "#Odd numbers = "<<i;
	
	
    
    return 0;
}
