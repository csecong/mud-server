// 示例：7.2.1
int main(object me, string arg)
{
    debug("文件目录：" + __DIR__);
    debug("文件名：" + __FILE__);
#ifdef FLUFFOS
    debug("当行前：" + __LINE__);
#endif
    debug("文件名：" + file_name());

    return 1;
}
