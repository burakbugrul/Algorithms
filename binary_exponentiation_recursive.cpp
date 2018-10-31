/*
    Author: Burak Bugrul
    Algorithm: Binary Exponentiation
    Time Comlexity( O(logP))
*/

#include <cstdio>

long long int binary_exp( long long int n, long long int p, long long int mod ){

    if( p == 0LL )
        return 1LL;
    if( p == 1LL )
        return n % mod;
    
    long long int half = binary_exp(n, p >> 1, mod);

    if( p & 1LL )
        return (((half * half) % mod ) * n ) % mod;
    
    return (half * half) % mod;
}

int main(){

    long long int N, P, MOD;

    scanf("%lld%lld%lld", &N, &P, &MOD);

    printf("%lld\n", binary_exp(N, P, MOD));

    return 0;
}