// Copyright 2015 Sungguk Lim. All right reserved.

#include "src/node.h"

namespace data_structure {

BiNode::BiNode() : value(-1), prev(nullptr), next(nullptr) {}

BiNode::BiNode(int initial_value)
    : value(initial_value), prev(nullptr), next(nullptr) {}

BiNode::~BiNode() {}

}  // namespace data_structure
