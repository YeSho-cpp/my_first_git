//交换函数
inline void change(int &a,int &b)
{
    a^=b;
    b^=a;
    a^=b;
}
