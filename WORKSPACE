new_http_archive(
  name = "gmock_archive",
  url = "https://googlemock.googlecode.com/files/gmock-1.7.0.zip",
  sha256 = "26fcbb5925b74ad5fc8c26b0495dfc96353f4d553492eb97e85a8a6d2f43095b",
  build_file = "third_party/gmock.BUILD",
)

bind(
  name = "gtest",
  actual = "@gmock_archive//:gtest",
)

bind(
  name = "gtest_main",
  actual = "@gmock_archive//:gtest_main",
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

