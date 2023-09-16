#ifndef GRAPH_H
#define GRAPH_H
// �ڽӱ�ͼ������edgesֻ�洢����
#include <iostream>
#include <vector>
#include "Vector2.h"
using namespace std;
struct Edge {
	int target; // �ߵ�Ŀ��ڵ�
	int distanceValue;
	Edge(int target, int distanceValue) {
		this->target=target;
		this->distanceValue=distanceValue;
	}
};
struct Node{
	Vector2 position;
	int type; // �ڵ�����
	vector<Edge> edges; // ��
	Node(int _type) {
		type=_type;
	}
};
class Graph{
private:
	vector<Node> nodes;
public:
	Graph();
	~Graph();
	void addNode(int type);
	void addEdge(int from, int to, int distanceValue);
	double getDistance(int from, int to);

};

#endif // !GRAPH_H