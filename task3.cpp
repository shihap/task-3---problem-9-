#include<iostream>
#include<vector>
using namespace std ;
void get_vector(vector<int> &a)
{
    int x ;
    cin >> x ;
    while (x!=-1)
    {
      a.push_back(x);
      cin >> x ;
    }
}

void get_values(vector<int> &a , int *b)
{
 for (int i = 0 ; i < a.size() ; i++)
 {
     b[a[i]]++;
 }
}

void print_values(int *b)
{
    for (int i = 0 ; i < 101 ; i++)
    {
        if ((b[i]!=0) && (b[i]<100)){
         cout << "Number of " << i << "'s: " << b[i] << endl ;
        }
    }
}

int main()
{
vector <int> v ;
get_vector(v);
int *p ;
p = new int [101] ;
get_values(v,p);
print_values(p);
}
