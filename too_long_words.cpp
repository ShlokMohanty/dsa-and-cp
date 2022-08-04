#include<iostream>
using namespace std ;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        char s[100];
        int length = sizeof(s)/sizeof(s[0]);
	for(int j=0;j<length;j++){
	cin>>s[j];	
}
        if(length>10)
        {
            s[0]=s[0];
            s[n-1]=s[n-1];
            int count;
            cout<< s[0]<< s[length-2]<< s[length-1] << endl;  
        }    
        else 
        {
            cout << s <<endl; 
        }

    }
    }