const ll MOD = (ll)1e9 + 7;
ll add(ll x, ll y)
{
    x += y;
    if (x >= MOD)
        return x - MOD;
    return x;
}
ll sub(ll x, ll y)
{
    x -= y;
    if (x < 0)
        return x + MOD;
    return x;
}
ll mult(ll x, ll y)
{
    return (x * y) % MOD;
}
ll bin_pow(ll x, ll p)
{
    if (p == 0)
        return 1;
    if (p & 1)
        return mult(x, bin_pow(x, p - 1));
    return bin_pow(mult(x, x), p / 2);
}
ll rev(ll x)
{
    return bin_pow(x, MOD - 2);
}
