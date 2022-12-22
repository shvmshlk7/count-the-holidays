#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int holiday = 8;
	    int notholiday = 0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(int j=0; j<n; j++){
	        if(a[j]%7 == 0 || (a[j]+1)%7 == 0){
	            notholiday++;
	        }
	        else{holiday++;}
	    }
	     
	    cout<<holiday<<endl;
	    
	}
	return 0;
}
