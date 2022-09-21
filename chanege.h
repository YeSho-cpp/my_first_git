//交换函数
void change(int &a,int &b)
{
    a^=b;
    b^=a;
    a^=b;
}
