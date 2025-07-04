
bool is_same_line(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    return (y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1);
}