//  Merge 2 Sorted Array
// https://www.codingninjas.com/studio/problems/sorted-array_6613259


// code:-

#include <bits/stdc++.h>
using namespace std;
vector<int> bruteForceMethod(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(b[i]);
    }
    vector<int> final(st.size());
    int i = 0;
    for (auto it : st)
    {
        final[i++] = it;
    }
    return final;
}

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> finalArr;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (finalArr.size() == 0 || finalArr.back() != a[i])
            {
                finalArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (finalArr.size() == 0 || finalArr.back() != b[j])
            {
                finalArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j < m)
    {
        if (finalArr.size() == 0 || finalArr.back() != b[j])
        {
            finalArr.push_back(b[j]);
        }
        j++;
    }

    while (i < n)
    {
        if (finalArr.size() == 0 || finalArr.back() != a[i])
        {
            finalArr.push_back(a[i]);
        }
        i++;
    }

    return finalArr;
}
