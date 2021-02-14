class Solution{
    public:
    vector<int>polyMultiply(int Arr1[], int Arr2[], int M, int N)
    {
       vector < int > res(N+M);
       for ( int i = 0 ; i < N+M ; ++i ) res[i] = 0;
       for ( int i = 0 ; i < M ; ++i ){
           for ( int j = 0 ; j < N ; ++j ){
               int x = Arr1[i]*Arr2[j];
               res[i+j]+=x;
           }
       }
       return res;
    }
};
