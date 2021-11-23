#include"nnew.h"
typedef char bit;
bit and_and(bit a,bit b)
{
    return a*b;
}
bit or_ro(bit c,bit d)
{
    return c||d;
}
bit nt(bit e)
{
    return !e ;
}
bit nand(bit a,bit b)
{
    return  !(a*b);
}
bit nor(bit a,bit b)
{
    return  !(a||b);
}