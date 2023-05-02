#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
/* TODO: add missing headers */
#include <linux/sched.h>

MODULE_DESCRIPTION("List current processes");
MODULE_AUTHOR("Kernel Hacker");
MODULE_LICENSE("GPL");

static int my_proc_init(void)
{
	/* TODO: print current process pid and its name */
	pr_info("The process is \"%s\" (pid %i)\n", current->comm, current->pid);

	return 0;
}

static void my_proc_exit(void)
{
	/* TODO: print current process pid and name */
	pr_info("The process is \"%s\" (pid %i)\n", current->comm, current->pid);
}

module_init(my_proc_init);
module_exit(my_proc_exit);
