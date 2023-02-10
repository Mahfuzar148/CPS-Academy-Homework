class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff = arr[1]-arr[0];
        bool s = true;
        for(int i=1;i<arr.size()-1;i++)
        {
            if(diff!=arr[i+1]-arr[i])
            {
                s = false;
                break;
            }
        }
        return s;

    }
};
