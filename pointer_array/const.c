//数组是常量指针，所以数组之间不能随便赋值
int i,j;
int* const p = &i;//指针p是const，这里表示指针p指向变量i的这件事是不变的
const int* q = &j;//不能通过*q赋值
const int a[] = {0,1,2,5,5};//数组里的值不会被改变
