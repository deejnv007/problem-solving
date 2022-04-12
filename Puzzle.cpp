#include<bits/stdc++.h>
using namespace std;

 int add(int a, int b)
    {
    // `%*s` means print a character `*` number of times
    return printf("%*s%*s", a, "", b, "");
    }

    int power(int a, int b){
        if(b == 0)
            return 1;
        int res = power(a, b-1);
        int ans = 0;
        for(int i=0; i<a; i++)
        {
            (ans+=res);
        }
        return ans;
    }

int main(){

//    float hh = 5;
//    float mm = 30;
//    float res = abs(mm/5-((hh+1)-(mm/5)/12))*30;
//    cout<<res<<endl;
//    return 0;

    cout<<power(8, 3);



}
