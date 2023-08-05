#include <iostream>

using namespace std;

// input n = 5

// output => 1+2+3+4+5

// non-recursive approach
//  int main(){
//      int n, sum = 0;

//     cin>>n;

//     for(int i = 1; i<=n; i++){
//         sum+=i;
//     }

//     cout<<sum<<endl;
// }

// recursive approach

int sum(int n)
{
    // Base Case
    //  if(n == 0){
    //      return 0;
    //  }
    if (n == 1)
    {
        return 1;
    }

    // Recursive case
    return n + sum(n - 1);
}

int main()
{
    int n;

    cin >> n;

    cout << sum(n) << endl;
}

// n+sum(n-1)  for the value n = 5;
/*
    1: 5 + sum(4)   n = 5
    2: 4 + sum(3)   n = 4
    3: 3 + sum(2)   n = 3
    4: 2 + sum(1)    n = 2
    5: 1 + sum(0)    n = 1
     6: 0 + sum(-1)  n = 0   //useless

*/

int mul(int m)
{
    // Base case
    if (m == 0)
    {
        return 0;
    }
    // Recursive case
    int n = 3;
    int z = mul(m - 1);
    cout << m << " " << z << endl;
    int ans = z + n;

    return ans;
}
int main()
{
    int m = 4;
    cout << mul(m) << endl;
}

/*
    n = 3, m  = 4, z = mul(3)
    n = 3, m  = 3, z = mul(2)
    n = 3, m  = 2, z = mul(1)
    n = 3, m  = 1, z = mul(0) .. base case hit

    n = 3, m  = 4, z = 9
    n = 3, m  = 3, z = 6
    n = 3, m  = 2, z = 3
   ->  n = 3, m  = 1, z = 0 .. base case hit => 3

*/

// output

/*
    1 0
    ans = 3+0 = 3
    2 3
    ans = 3+3 = 6
    3 6
    ans = 3+6 = 9
    4 9
    ans 3+9 = 12

    12


*/