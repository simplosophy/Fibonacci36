
fib(n){
	if(n<2)
		return 1;
	else return fib(n-2)+fib(n-1);
}

可以使用time命令来测试运行时间，如time node fib.js 36

C、java等编译型语言需要自己先编译

归功与V8引擎，node.js表现很出色，测试结果合情理，但是也会出人意料。

困，碎觉去鸟。。。