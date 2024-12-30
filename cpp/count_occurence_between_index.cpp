int cnt(const string& str, char ch, ll l, ll r) {
    int count = 0;
    for (ll i = l; i <= r; ++i) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}