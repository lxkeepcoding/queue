#define _CRT_SECURE_NO_WARNINGS   1

#include"queue.h"
void TestOne()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q))
	{
		printf("%d  ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");

	QueueDestory(&q);

}

int main()
{
	TestOne();
	return 0;
}