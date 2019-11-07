#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    i=0;
    j=0;
    int i_start=0;
    int j_start,counter=m*n;
    while(m!=0 && n!=0 && counter>0)
    {
        j_start = i_start + 1;
        if(m!=0 && counter>0)
        {
            for(i=i_start;i<m+i_start;i++)
            {
                cout<<a[i][j]<<", ";
                counter--;
            }
            m--;
            i--;
        }
        if(n!=0 && counter>0)
        {
            for(j=j_start;j<n+i_start;j++)
            {
                cout<<a[i][j]<<", ";
                counter--;
            }
            n--;
            j--;
        }
        if(m!=0 && counter>0)
        {
            for(i=m-1+i_start;i>=i_start;i--)
            {
                cout<<a[i][j]<<", ";
                counter--;
            }
            m--;
            i++;
        }
        if(n!=0 && counter>0)
        {
            for(j=n-1+i_start;j>=j_start;j--)
            {
                cout<<a[i][j]<<", ";
                counter--;
            }
            n--;
            j++;
        }
        i_start++;
    }
    cout<<"END";
    return 0;
}
