helloworld
==========
上传三个：first.patch,seg_old.c,README.md
有三个例子fun1(),fun2(),fun3()
1.先编译 gcc -o seg_old seg_old.c -g
2.用的是gdb工具 gdb ./seg_old
3.设断点 break 6,break 12,break 18
4.出现错误第8行,第14行,第20行
5.修改错误
6.制作patch
  diff -ruN seg_old.c seg_new.c >first.patch
7.再次运行，无错
