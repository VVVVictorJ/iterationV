// static_linklist.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<stdio.h>
#include<malloc.h>
#include"sing_linklist.h"

static LNode head;

int main()
{

	if (0==create_list(&head,123))
	{
		printf("%i\n",head.next->character);
	}
/*	free(head.next);
	printf("%i\n", head.next->character);*/	
	//if (0==append_ele(&head,456))
	//{
	//	printf("%i\n%i\n", head.next->character, head.next->next->character);
	//	printf("%i\n%i\n", head.next->subscript, head.next->next->subscript);
	//}
	append_ele(&head, 456);
	if (0==del_ele(&head,123))
	{
		printf("%i\n", head.next->character);
		printf("%i\n", head.next->subscript);
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
