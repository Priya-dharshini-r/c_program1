long long getSmallestDivNum(long long n)
{
    //Your code here
    long long answer=1;
    for(long long i=1;i<n;i++)
    {
        answer=(answer*i)/(__gcd(answer,i));
        return answer;
    }
}
