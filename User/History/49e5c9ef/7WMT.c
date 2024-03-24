#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/sched.h>

SYSCALL_DEFINE2(sse_formula, int, id)
{
    printk("SSE3044: (pid %d) Hello world, %d!\n", task_pid_nr(current), id);
    return 0;
}
