class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
          int lastPos = arr.size() - 1, v = arr[lastPos];
        arr[lastPos] = -1;
        while (lastPos--) {
            if (arr[lastPos] > v) swap(arr[lastPos], v);
            else arr[lastPos] = v;
        }
        return arr;
    }
};
