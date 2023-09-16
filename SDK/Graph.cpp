#include "Graph.h"

Graph::Graph() 
{
	
}
Graph::~Graph()
{

}
/*
* 向图中添加工作台,传入工作台的类型
*/
void Graph::addNode(int type) 
{
	this->nodes.push_back(Node(type));
}
/*
* 向图中添加边,传入边的起点和终点
*/
void Graph::addEdge(int from, int to, int distance) {
	int distanceValue = getDistance(from, to);
	this->nodes[from].edges.push_back(Edge(to, distanceValue));
}
/*
* 获取两个节点的距离
*/
double Graph::getDistance(int from, int to)
{
	return 3.0f;
}