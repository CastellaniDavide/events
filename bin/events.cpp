/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <bits/stdc++.h>
using namespace std;

// constraints
#define MAXN 50000

// input data
int N, V, i;
int prices[MAXN], vouchers[MAXN];
int result = 0;

int main()
{
//  uncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N, &V));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &prices[i]));
    for(i=0; i<V; i++)
        assert(1 == scanf("%d", &vouchers[i]));

    //Sort
    sort(prices, prices + N);
    sort(vouchers, vouchers + N);

    // Code
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < V; ++j)
        {
            if(vouchers[j] >= prices[i] && vouchers[i] != -1)
            {
                vouchers[i] = -1;
                result++;
                break;
            }

        }
    }

    printf("%d\n", result); // print the result
    return 0;
}
