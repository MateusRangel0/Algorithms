#include<bits/stdc++.h>
#define MAXN 100

using namespace std;

bitset<MAXN> primes;

void sieve() {
    primes.set();
    primes[0] = primes[1] = 0;

    for (long long int i = 2; i < MAXN; i++) {
        if (primes[i]) {
            for (long long int j = i*i; j < MAXN; j+= i) primes[j] = 0;
                //printf("lld ", i);
        }
    }
}
