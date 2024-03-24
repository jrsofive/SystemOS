#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/sched.h>

SYSCALL_DEFINE2(sse_formula, int, a, int, b, int, c)
{
    printk("SSE3044: (pid %d) Hello world, %d!\n", task_pid_nr(current), id);
    return 0;
}
