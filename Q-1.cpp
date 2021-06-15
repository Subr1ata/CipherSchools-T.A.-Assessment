
//Ex- N=even=8
//Arr=[1,-1,2,-2,3,-3,4,-4]...

//N=odd=5=[1,-1,2,-2,0]

//For n=even loop should be from 1 to n/2.
//N=odd 1 to n/2.

#include <bits/stdc++.h>

using namespace std;

// Function to print distinct n
// numbers such that their sum is 0

void findN(int N)
{

    for (int i = 1; i <= N / 2; i++) {


        // Print 2 symmetric numbers

        cout << i << ", " << -i<<", ";

    }


    // print a extra 0 if N is odd

    if (N % 2 == 1)

        cout << 0;
}

// Driver code

int main()
{

    int N;
    cout<<"Enter N : ";
    cin>>N;

    findN(N);
}
