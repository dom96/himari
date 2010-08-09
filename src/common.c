#include <common.h>

// Write a byte out to the specified port.
void outb(u16int port, u8int value)
{
    __asm__ __volatile ("outb %1, %0" : : "dN" (port), "a" (value));
}

u8int inb(u16int port)
{
    u8int ret;
    __asm__ __volatile("inb %1, %0" : "=a" (ret) : "dN" (port));
    return ret;
}

u16int inw(u16int port)
{
    u16int ret;
    __asm__ __volatile ("inw %1, %0" : "=a" (ret) : "dN" (port));
    return ret;
}

// Copy len bytes from src to dest.
u8int* memcpy(u8int *dest, const u8int *src, u32int len)
{
    u32int i;
    for( i = 0; i < len; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}

// Write len copies of val into dest.
u8int* memset(u8int *dest, u8int val, u32int len)
{
    u32int i;
    for( i = 0; i < len; i++)
    {
        dest[i] = val;
    }
    return dest;
}

// Compare two strings. Should return -1 if 
// str1 < str2, 0 if they are equal or 1 otherwise.
int strcmp(char *str1, char *str2)
{
    // TODO: implement this
}

// Copy the NULL-terminated string src into dest, and
// return dest.
char *strcpy(char *dest, const char *src)
{
    // TODO: implement this 
}

// Concatenate the NULL-terminated string src onto
// the end of dest, and return dest.
char *strcat(char *dest, const char *src)
{
    // TODO: implement this
}
