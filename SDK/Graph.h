#ifndef GRAPH_H
#define GRAPH_H
// 邻接表图，有向，edges只存储出边
#include <iostream>
#include <vector>
#include "Vector2.h"
using namespace std;
struct Edge {
	int target; // 边的目标节点
	int distanceValue;
	Edge(int target, int distanceValue) {
		this->target=target;
		this->distanceValue=distanceValue;
	}
};
struct Node{
	Vector2 position;
	int type; // 节点类型
	vector<Edge> edges; // 边
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