#include <iostream>

using namespace std;

void printArrow(int n, bool left) {
     int value =n;
     if (left) {
        while (value>0) {
            int tam= value;
            while (tam < n) {
                  cout << "  ";
                  tam++;
            }
            for (int i=1; i<=value; i++) {
                cout << "*";
            }
            cout << endl;
            value--;
        }
        for (int i=1;i<n;i++){
        	for (int j=n-i-1;j>0; j--) {
			    cout << "  ";
			 }
			for (int j=1;j<=i+1; j++) {
				cout << "*";
			}
			cout << endl;
        }
    }
    else {
    	 for (int i=1; i<=n; i++){
    	 	 for (int j=1; j<=n-i;j++)
    	 	      cout << " ";
    	 	for (int j=n; j >=i; j--)
    	 	    cout << "*";
    	 	cout << endl;
    	 }
         for (int i=2; i<=n; i++) {
         	  for (int j=i-1; j>0;j--) {
			       cout << " ";
			   }
			  for (int j=1; j<=i; j++) {
			       cout << "*";
			   }
			  cout << endl;
         	  }
         }
}

int main() {
    int n=5;
    bool left =0;
    printArrow(n,left);
    return 0;
}
