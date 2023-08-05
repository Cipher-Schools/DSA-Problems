#include <iostream>

using namespace std;

// int main()
// {
//     int i = 0, n;
//     cout<<"Enter n: ";
//     cin>>n;
//     // 10 times
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> a[i] // O(1) time complexity
//     }

//     for (i = 0; i < 10; i++)
//     {
//         cout << a[i] << " ";
//     }
//     // O(n) n =10
//     // 10secs
// }

// // m = small
// //time complexity of O(m*n)  can be assumed as O(n)

int namex()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 1; k < 10; k++)
            {
                cout << i + j + k << " "; // 1s
                cout << i * j * k << " "; // 2s

                // max(1, 2) =>  2s
            }
        }
    }
}
// O(n^2);

// O(logn)

int abc2()
{
    for (int i = 1; i <= 10; i *= 2)
    {
        cout << i << " "; // 1s
    }
}

// 1 2 4 8
// n = 20
// => output : 1, 2, 4, 8, 16

// n = 10 => abc() takes 4s log(10)
// n = 20 => abc() takes  5s log(20)
//  n = 30  => abc() takes 5s

int abc3()
{
    int n = 10;
    for (int i = 1; i < n; i++)
    { // loop1
        for (int j = 1; j < n; j *= 2)
        { // loop2
            cout << i * j << " ";
        }

        for (int j = 1; j < n; j++)
        { // loop3
            cout << i + j;
        }

        // max(logn, n)
    }
}

// O(nlogn)

int abc4()
{
    int n = 10; // 4 bytes
    for (int i = 1; i <= n; i++)
    {
        // O(logn)
        for (int j = n; j >= 1; j /= 2)
        {
            cout << i * j << endl;
        }

        // O(n)
        for (int k = 1; k <= n / 2; k++)
        {
            cout << i * k << endl;
        }
    }
}

// int a = [2, 3, 4, 6, 7]

/*

searching element = 6;


ist iteration: 2 to 7
2nd iteration: 4 to 7
*/

/*
Asympototic notation

O: Big O: upper bound: worst case time complexity,
Omega: lower bound: best case time complexity,
theta: upper and lower bound: average case time complexity


Binary Search:
    Worst case: O(log n)
    Best case: omega(1)
    Average case: theta(log n)

Linear search:
    Worst case: O(n)
    Best case: omega(1)
    Average case: theta(n)


*/

int sum(int n)
{
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

*/

/*
space complexity: memory used in computation + memory used variable declaration
   abc4() 4 bytes: O(1)

Auxillary space: memory used in computation
*/