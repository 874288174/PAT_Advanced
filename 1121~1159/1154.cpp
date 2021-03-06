#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e4+10;

struct node {
  int t1, t2;
};

int main() {
    int n, m, k;
    cin >> n >> m;
    vector<node> v(m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &v[i].t1, &v[i].t2);
    }
    cin >> k;
    while (k--) {
        int a[MAXN] = {0};
        bool flag = true;
        unordered_set<int> My_set;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            My_set.insert(a[i]);
        }
        for (int i = 0; i < m; i++) {
            if (a[v[i].t1] == a[v[i].t2]) {
                flag = false;
                break;
            }
        }
        if (flag)   printf("%d-coloring\n", My_set.size());
        else  printf("No\n");
    }
    return 0;
}

