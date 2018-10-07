#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/syscalls.h>
#include "sleepyProcess.h"


asmlinkage long sys_listSleepyProcess(long pid, const char __user *buf, int size) {
	struct task_struct *prc;
	unsigned char kbuf[256];
	int bufsz;
	int ret;
	for_each_process(prc) {
		if ()
	}
}