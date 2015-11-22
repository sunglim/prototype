// Copyright 2015 Sungguk Lim. All right reserved.

#ifndef NODE_H_
#define NODE_H_

namespace data_structure {

// Binary node holding two friend nodes(previous, next).
struct BiNode {
  BiNode();
  BiNode(int initial_value);
  ~BiNode();

  int value;
  BiNode* prev;
  BiNode* next;
};

}  // namespace data_structure

#endif  // NODE_H_
