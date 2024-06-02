class Solution {
public:
    int stoneGameVI(vector<int>& a, vector<int>& b) {
        int i=a.size()-1,a1=0,a2=0;//variables declare and initializing 
        vector<vector<int>>v;//vector delcare
        for(int i=0;i<a.size();i++)//Iterating through vector's size 
            v.push_back({a[i]+b[i],i});//Inserting vector's elements 
        sort(v.begin(),v.end());//sorting vector's elements
        while(i>=0){//Traversing through Vector's initial size
            a1+=a[v[i][1]];i--;//Incrementing vector nd decrementing vector's indx 
            if(i>=0)a2+=b[v[i][1]]; i--;//adding vector's initial elements decrementing at its  each pos
        }
        if(a1>a2)return 1;//printing 1 to Winning game 
        else if(a1==a2)return 0;//printing 0 tot the eqaul score
        else return -1;//printing -1 to the UnWinning Game Score 
    }
};
