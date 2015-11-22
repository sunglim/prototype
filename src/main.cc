// Copyright 2015 Sungguk Lim. All right reserved.

#include <iostream>
#include <memory>

#include "glog/logging.h"

#include "src/node.h"
#include "src/node_util.h"

using data_structure::BiNode;

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);

  // NOTE(sungguk): For more tests, See src/test_main.cc
  std::unique_ptr<BiNode> node(new BiNode(1));
  std::unique_ptr<BiNode> node2(new BiNode(2));
  std::unique_ptr<BiNode> node3(new BiNode(3));
  std::unique_ptr<BiNode> node4(new BiNode(4));
  std::unique_ptr<BiNode> node5(new BiNode(5));
  std::unique_ptr<BiNode> node6(new BiNode(6));
  std::unique_ptr<BiNode> node7(new BiNode(7));

  /* Create an Binary Search Tree.
             1
            / \
          2     3
         / \    / \
        4   5  6   7         */
  node->prev = node2.get();
  node->next = node3.get();
  node2->prev = node4.get();
  node2->next = node5.get();
  node3->prev = node6.get();
  node3->next = node7.get();

  BinaryTreeToDoublelyLinkedList(node.get());

  // Converted to doublely linked list. BFS ordered.
  // 1 - 2 - 3 - 4 - 5 - 6 - 7
  for (BiNode* current = node.get(); current != nullptr;
       current = current->next) {
    std::cout << " -> " << current->value;
  }
  std::cout << std::endl;

  return 0;
}
