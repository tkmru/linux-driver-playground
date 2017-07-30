#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void){
    printk(KERN_ALERT "driver loaded\n");
    printk(KERN_ALERT "Hello World\n");
    return 0;
}

static int hello_exit(void){
    printk(KERN_ALERT "driver unloaded\n");
}

module_init(hello_init);
module_exti(hello_exit);
