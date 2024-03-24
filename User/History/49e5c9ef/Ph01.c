#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/sched.h>

int precal_arr[50] = {
    0, 10000, 14142, 17321, 20000, 22361, 24495, 26458, 28284, 30000, 
    31623, 33166, 34641, 36056, 37417, 38730, 40000, 41231, 42426, 43589,
    44721, 45826, 46904, 47958, 48990, 50000, 50990, 51962, 52915, 53852,
    54772, 55678, 56569, 57446, 58310, 59161, 60000, 60828, 61644, 62450,
    63246, 64031, 64807, 65574, 66332, 67082, 67823, 68557, 69282, 70000,
}


SYSCALL_DEFINE3(sse_formula, int, a, int, b, int, c)
{
    
    // Exception Handling
    int D = b * b - 4 * a * c;
    if ( a == 0 ) {
        printk("SSE3044: ERROR: a == 0\n");
    }
    else if ( D < 0 ) {
        printk("SSE3044: ERROR: D < 0\n");
    }
    else if ( a < 0 || a > 7 || b < 0 || b > 7 || c < 0 || c > 7 ) {
        printk("SSE3044: ERROR: OUT OF RANGE\n");
    }
    else {









    }









    return 0;
}
