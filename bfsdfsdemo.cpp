#include<bits/stdc++.h>
using namespace std;
class Graph{

    int V;
    list<int> *adj;
    public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int v, int w)
    {
        adj[v].push_back(w);
    }
    void DFS(stack<int>&s,vector<int>&v)
    {
        if(s.empty())
            return;
            int ele = s.top();
            s.pop();
            if(!v[ele])
            {
                v[ele] = true;
                cout << ele << " ";
                for(auto i:adj[ele])
                {
                    if(!v[i])
                    {
                        s.push(i);
                    }
                }
            }
            DFS(s, v);
    }
    void BFS(queue<int>&q,vector<int>&v)
    {
            if(q.empty())
                return;
            int ele = q.front();
            q.pop();
            if(!v[ele])
            {
                cout << ele << " ";
                v[ele] = true;
                for(auto i:adj[ele])
                {
                    if(v[i]==false)
                    {
                        q.push(i);
                    }
                }
            }
            BFS(q, v);
    }
};
int main()
{
    stack<int> s;
    queue<int> q;
    Graph g(11);
    vector<int> dfsvector(11, false);
    vector<int> bfsvector(11, false);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,5);
    g.addEdge(2,6);
    g.addEdge(3,7);
    g.addEdge(3,8);
    g.addEdge(4,9);
    g.addEdge(4,10);
    s.push(1);
    q.push(1);
    cout << "DFS Traversal" << endl;
    g.DFS(s,dfsvector);
    cout << endl;
    cout << "BFS Traversal" << endl;
    g.BFS(q,bfsvector);
    return 0;
}