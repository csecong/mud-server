// children.c
int main(object me, string arg)
{
    if (!arg)
    {
        debug("指令格式： children /path/target");
    }
    else
    {
        print_r(children(arg));
    }

    return 1;
}
