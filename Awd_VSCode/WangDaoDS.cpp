//#include<stdlib.h>
//#define InitSize 10
//typedef struct {
//	int* data;
//	int MaxSize;
//	int length;
//}SeqList;
//void InitList(SeqList& L) {
//	L.data = (int*)malloc(InitSize*sizeof(int));
//	L.length = 0;
//	L.MaxSize = InitSize;
//}
//void IncreaseSize(SeqList &L, int len) {
//	int* p = L.data;
//	L.data= (int*)malloc((L.MaxSize+len)*sizeof(int));
//	for (int i = 0; i < L.length; i++) {
//		L.data[i] = p[i];
//	}
//	L.MaxSize = L.MaxSize + len;
//	free(p);
//}
//int main() {
//	SeqList L;
//	InitList(L);
//	IncreaseSize(L, 5);
//}
//#include<bits/stdc++.h>
//#define MaxSize 10
//typedef struct {
//	int data[MaxSize];
//	int length;
//}SqList;
//void InitList(SqList &L) {//创建List
//	L.length = 0;
//}
//
//void ListInsert(SqList& L, int i, int e) {
//	for (int j = L.length; j >= i; j--)
//		L.data[j] = L.data[j - 1];
//	L.data[i - 1] = e;
//	L.length++;
//}
//int main() {
//	SqList L;
//	InitList(L);
//	ListInsert(L, 3, 3);
//	return 0;
//} 
#include<stdlib.h>
struct LNode {
	int data;
	struct LNode* next;
};
struct LNode* p = (struct LNode*)malloc(sizeof(struct LNode));