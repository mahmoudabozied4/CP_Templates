bool is_Pal(string s){
    for(int i = 0, j = sz(s) - 1; i < sz(s)/2; i++, j--){
        if(s[i] != s[j]) return false;
    }
    return true;
}