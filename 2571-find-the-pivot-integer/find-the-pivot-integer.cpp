class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = n*(n+1)/2;
        int sum2 = 0,i = 1;
        for(i = 1;i <=n;i++){
            cout<<sum1<<" "<<sum2<<endl;
            sum1-=i;
            if(sum1==sum2) break;
            sum2+=i;
        }
        cout<<i<<endl;
        if(sum1==sum2) return i;
        else return -1;
    }
};