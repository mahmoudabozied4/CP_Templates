bool is_triangle(ll a, ll b, ll c){
    return (a + b > c) && (a + c > b) && (b + c > a) && (a && b && c);
}