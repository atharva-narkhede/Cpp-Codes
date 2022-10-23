#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a ;
    int b,c,d,e;
     for(int i=1;i<=5;i++){
     for(int j=1;j<=i;j++){
     cout<<"* ";
     }
     cout<<"\n";
     }
cout<<endl<<endl<<endl;
     for(int i=1;i<=5;i++){
     for(int j=5;j>=i;j--){
     cout<<"* ";
     }
     cout<<"\n";
     }

     cout<<endl<<endl<<endl;
     for(int i=1;i<=5;i++){
     for(int j=1;j<=i;j++){
     cout<<j<<" ";
     }
     cout<<"\n";
     }
     cout<<endl<<endl<<endl;
     for(int i=1;i<=5;i++){
     for(int j=1;j<=i;j++){
        cout<<i<<" ";
     }
     cout<<"\n";
     }
     cout<<endl<<endl<<endl;
     for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((i + j) <= 5)
                cout << " ";
            else
                cout << "* ";
        }
        cout << "\n";
    }
    cout<<endl<<endl<<endl;
    int n;
    //cin >> n;
    n=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
             cout<<n<<" ";
             n++;
        }
        cout << "\n";
    }
    cout<<endl<<endl<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=(5-i); j++)
        {
            cout<<" ";
        }
            for(int k=1;k<=i;k++)
             cout<<"* ";
        
        cout << "\n";
    }
    return 0;
}
