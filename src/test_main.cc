#include <memory>

#include "gtest/gtest.h"

#include "src/node.h"
#include "src/node_util.h"

using BinarySearchTree = ::testing::Test;
using NodeUtil = ::testing::Test;
using data_structure::BiNode;

TEST(BinarySearchTree, CreateBinaryTree) {
  std::unique_ptr<BiNode> node(new BiNode(1));
  std::unique_ptr<BiNode> node2(new BiNode(2));
  std::unique_ptr<BiNode> node3(new BiNode(3));

  // If we don't set |next| or |prev|. They should become nullptr by default.
  EXPECT_EQ(node2->next, nullptr);
  EXPECT_EQ(node2->prev, nullptr);

  node->prev = node2.get();
  node->next = node3.get();
  EXPECT_EQ(node->prev, node2.get());
  EXPECT_EQ(node->next, node3.get());
}

TEST(BinarySearchTree, DeleteNode) {
  std::unique_ptr<BiNode> node(new BiNode(1));
  node.release();
  EXPECT_EQ(node, nullptr);
}

TEST(BinarySearchTree, ConvertToDoublely) {
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

  int expected[] = {1, 2, 3, 4, 5, 6, 7};
  BiNode* current = node.get();
  for (const auto& num : expected) {
    EXPECT_EQ(current->value, num);
    current = current->next;
  }
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
