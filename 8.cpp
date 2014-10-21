#include<iostream>;
using namespace std;
int main(void)
{
int k, d, p, P, l, h = 9, m = 0,a;
cout<<"kolichestvo urokov"<<endl;
cin>>k;
cout<<"dlitelnost uroka"<<endl;
cin>>d;
cout<<"dlitelnost malenkogo pereriva"<<endl;
cin>>p;
cout<<"dlitelnost bolshogo pereriva"<<endl;
cin>>P;
cout<<"chislo urokov do bolshogo pereriva"<<endl;
cin>>l;
cout<<"lesson start end"<<endl;
if (cin.fail())
 {
  	cin.clear();
 }

for (int i = 1; i <= k; i++)
 {
   cout<<i<<"      "<<h<<":"<<m<<" ";
   h = h + (m + d) / 60;
   m = (m + d) % 60;
   cout<<h<<":"<<m<<endl;
   if (i == l) 
    {
      h = h + (m + P) / 60;
      m = (m + P) % 60;
    }
   else
    {
      h = h + (m + p) / 60;
      m = (m + p) % 60;
    }

  }
cin>>a;
}
