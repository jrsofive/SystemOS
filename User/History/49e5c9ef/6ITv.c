#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/sched.h>



// Precalculated value of SQRT( D ) * 5000000
int precal_sqrtD[50] = {
    0, 5000000, 7071068, 8660254, 10000000, 11180340, 12247449, 13228757, 14142136, 15000000, 
    15811388, 16583124, 17320508, 18027756, 18708287, 19364917, 20000000, 20615528, 21213203, 21794495, 
    22360680, 22912878, 23452079, 23979158, 24494897, 25000000, 25495098, 25980762, 26457513, 26925824, 
    27386128, 27838822, 28284271, 28722813, 29154759, 29580399, 30000000, 30413813, 30822070, 31224990, 
    31622777, 32015621, 32403703, 32787193, 33166248, 33541020, 33911650, 34278273, 34641016, 35000000 
};

// Precalculated Value of Remainder


SYSCALL_DEFINE3(sse_formula, int, a, int, b, int, c)
{
    
    // Exception Handling
    int D = b * b - 4 * a * c;
    if ( a == 0 ) {
        printk("SSE3044: ERROR: a == 0\n");
    }
    else if ( D < 0 ) {
        printk("SSE3044: ERROR: b^2-4ac < 0\n");
    }
    else if ( a < 0 || a > 7 || b < 0 || b > 7 || c < 0 || c > 7 ) {
        printk("SSE3044: ERROR: OUT OF RANGE\n");
    }
    else {
        int sqrtD = precal_sqrtD[D];
        int dividend = 5000000 * b - sqrtD;
        int quotient = dividend / a;
        int remainder = dividend % a;

        if ( remainder * 2 >= a ) quotient++;

        printk("SSE3044: %dx^2 + %dx + %d = 0 -> can be %d.%d\n", a, b, c, quotient / -10000000, quotient % 10000000);
    }


    return 0;
}
