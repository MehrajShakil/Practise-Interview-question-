 class Solution
{
    public:
    using ll = long long;
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack < ll > st;
        vector<ll> order;
        for ( int i = n - 1 ; ~i ; --i ) {
            if(st.empty()){
                order.push_back(-1);
                st.push(arr[i]);
            }
            else{
                while( !st.empty() and st.top()<arr[i]){
                    st.pop();
                }
                if(st.empty()){
                order.push_back(-1);
                }
                else{
                order.push_back(st.top());
                }
                st.push(arr[i]);
            }
        }
        reverse(order.begin(),order.end());
        return order;
    }
    
};
