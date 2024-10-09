class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {

        if(sx>tx || sy>ty)
        return false;

        while (tx >= sx && ty >= sy) {
            if (tx == sx && ty == sy) {
                return true;
            }
            if (tx > ty) {

                tx-=ty;

                //  int  e=(tx-ty)/ty;
                // tx-=e*ty;
            }
            else
                    ty-=tx;
                
        }
        return false;
    }
};

