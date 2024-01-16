class Solution {
    long long lcm(long long a, long long b) {
        return (a * b) / gcd(a, b);
    }

    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    long long ans = LLONG_MAX;

    void binsearch(long long d1, long long d2, long long cnt1, long long cnt2, long long start, long long end) {
        while (start <= end) {
            long long m = end - (end - start) / 2;
            long long a = m - (m / d1);
            long long b = m - (m / d2);
            long long c = m - m / lcm(d1, d2);

            if (a >= cnt1 && b >= cnt2 && c >= cnt1 + cnt2) {
                ans = m;
                end = m - 1;
            } else {
                start = m + 1;
            }
        }
    }

public:
    long long minimizeSet(long long divisor1, long long divisor2, long long uniqueCnt1, long long uniqueCnt2) {
        binsearch(divisor1, divisor2, uniqueCnt1, uniqueCnt2, 0LL, LLONG_MAX);
        return ans;
    }
};