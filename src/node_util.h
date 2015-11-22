#include <queue>

#include "glog/logging.h"

#include "src/node.h"

namespace data_structure {

void BinaryTreeToDoublelyLinkedList(BiNode* root) {
  if (root == nullptr) {
    LOG(INFO) << "Unexpected nullptr";
    return;
  }

  // Do BFS; store node to |queue|.
  std::queue<BiNode*> queue;
  queue.push(root);
  BiNode *prev = 0, *curr = 0;
  while (!queue.empty()) {
    curr = queue.front();
    queue.pop();

    if (curr->prev)
      queue.push(curr->prev);

    if (curr->next)
      queue.push(curr->next);

    curr->next = queue.front();
    curr->prev = prev;
    prev = curr;
  }
}

}  // namespace data_structure
