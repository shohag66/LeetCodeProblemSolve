#include <cstring>
class Solution {
public:
    int reverse(int x)
    {
        int result=0;
        while(x/10!=0)
        {
            int y=x%10;
            x=x/10;
            result=result*10+y;
        }
        if(result>214748364||result<-214748364)
        {
            return 0;
        }
        else
        {
            return result*10+x;
        }
    }
};
