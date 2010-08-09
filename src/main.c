#include <monitor.h>

int kmain(void* mbd, unsigned int magic)
{
    // Initialise the screen (by clearing it)
    monitor_clear();
    // Alloc some memory
    u8int mem;
    memset(&mem, 32, 5);
    
    monitor_write("Hello, world!\n");
    monitor_write_bin(mem);
    monitor_write("\n");
    monitor_write_dec(mem);
    
    return 0;
}
