#include <iostream>
using namespace std;

// 간단한 문제다 *2만큼은 무료로 이동할 수 있으니 최종 위치에서 계속 2로 나누어주면 된다.
// 이때 홀수라면 어쩔수 없이 연료를 소모하여 1칸을 움직인 후 짝수로 만들어준다.

int solution(int n)
{
    int ans = 1;
    
    while (n != 1)
    {
        if (n%2 == 1)
        {
            n--;
            ans++;
        }
        n = n / 2;
    }
    
    return ans;
}
