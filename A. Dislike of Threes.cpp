#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i=1;
    cin >>t;
    while(t--)
    {
        int k ;
        cin >> k;
        for(int j=1; j<=k; j++)
        {

            if(i%3==0 || i%10 == 3)
            {
                j--;
            }
            else{
                if(j==k)
                {
                    cout<< i<< endl;
                    break;
                }
            }
        }
        i++;
    }
    return 0;

}
