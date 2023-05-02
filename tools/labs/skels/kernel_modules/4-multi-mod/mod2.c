#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

MODULE_DESCRIPTION("add module");
MODULE_AUTHOR("Kernel Hacker");
MODULE_LICENSE("GPL");

int add(int a, int b)
{
	return a + b;
}
