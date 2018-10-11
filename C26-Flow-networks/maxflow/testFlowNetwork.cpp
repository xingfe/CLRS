/*************************************************************************
        > File Name: testFlowNetwork.cpp
        > Author: Louis1992
        > Mail: zhenchaogan@gmail.com
        > Blog: http://gzc.github.io
        > Created Time: Fri Nov 13 09:16:10 2015
 ************************************************************************/
#include "FlowNetwork.cpp"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream in("input.txt");
  FlowNetwork G(in);
  cout << G;

  return 0;
}
