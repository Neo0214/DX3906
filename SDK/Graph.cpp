#include "Graph.h"

Graph::Graph() 
{
	
}
Graph::~Graph()
{

}
/*
* ��ͼ����ӹ���̨,���빤��̨������
*/
void Graph::addNode(int type) 
{
	this->nodes.push_back(Node(type));
}
/*
* ��ͼ����ӱ�,����ߵ������յ�
*/
void Graph::addEdge(int from, int to, int distance) {
	int distanceValue = getDistance(from, to);
	this->nodes[from].edges.push_back(Edge(to, distanceValue));
}
/*
* ��ȡ�����ڵ�ľ���
*/
double Graph::getDistance(int from, int to)
{
	return 3.0f;
}