new_git_repository(
  name = "remote_gtest",
  remote = "https://github.com/bjh83/googletest.git",
  commit = "7c508e6611f14cbc0da048c0e726870b93b1cc00",
  build_file = "third_party/gtest.BUILD",
)

bind(
  name = "gtest",
  actual = "@remote_gtest//:main",
)

new_git_repository(
  name = "remote_glog",
  remote = "https://github.com/google/glog.git",
  commit = "47ab571f38e8c6266c260010ac631f888e302e6d",
  build_file = "third_party/glog.BUILD",
)

bind(
  name = "glog",
  actual = "@remote_glog//:main",
)
