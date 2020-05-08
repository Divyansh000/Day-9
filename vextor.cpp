class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v)
    {

        if(v.size()==2)
        {
            return true;
        }
        int i=2;
        int a=0,b=0;
        a=(v[1][1]-v[0][1]);
        b=(v[1][0]-v[0][0]);
        while(b==0)
        {
            b=v[i][0]-v[0][0];
            if((i==v.size()-1)&&(b==0))
            {
                return true;
            }
            i=i+1;
        }
        int slope=a/b,lhs=0,rhs=0,c=0;
        for(int j=0;j<v.size()-1;j++)
        {
            rhs=v[j][1]-v[j+1][1];
            lhs=v[j][0]-v[j+1][0];
            if(rhs==(slope*lhs))
            {
                c++;
            }

        }
        if(c==v.size()-1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};
