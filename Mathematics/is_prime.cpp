#include<bits/stdc++.h>
#define MAXN 10000000

using namespace std;

vector<long long int> primos;
bitset<MAXN> primes;
void sieve(){
    primes.set();
    primes[0] = primes[1] = 0;

    for(long long int i = 2; i < MAXN; i++) {
        if(primes[i]) {
            for(long long int j = i*i; j < MAXN; j+= i) primes[j] = 0;
            primos.push_back(i);
        }
    }
}

bool is_prime(long long int num) {
    if(num < MAXN) return primes[num];
    for(int i = 0; i < primos.size(); i++) {
        if(num % primos[i] == 0) return false;
    }
    return true;
}

int main() {
    sieve();
    long long int num;
    scanf("%lld", &num);
    printf("%c\n", is_prime(num)? 'S': 'N');
    return 0;
}
