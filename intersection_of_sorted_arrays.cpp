vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    int i = 0, j = 0;
    vector<int>c;
    int x = a.size();
    int y = b.size();
    while(i<x && j<y){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            c.push_back(a[i]);
            i++;
            j++;
        }
    }
    return c;
}
