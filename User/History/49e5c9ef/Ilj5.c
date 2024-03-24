#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/sched.h>

SYSCALL_DEFINE3(sse_formula, int, a, int, b, int, c)
{
    // Exception Handling

    if ( a == 0 ) {
        printk("SSE3044: ERROR: a == 0\n");
    }
    else if ( b*b < 4 * a * c ) {
        printk("SSE3044: ERROR: D < 0\n");
    }
    else if ( a < 0 || a > 7 || b < 0 || b > 7 || c < 0 || c > 7 ) {
        printk("SSE3044: ERROR: OUT OF RANGE\n");
    }
    else {








        
    }









    return 0;
}
