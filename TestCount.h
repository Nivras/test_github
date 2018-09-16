#ifndef TEST_GITHUB_TESTCOUNT_H
#define TEST_GITHUB_TESTCOUNT_H


class TestCount {
public:
  TestCount() {}
  TestCount(int cnt) : cnt_(cnt) {}

  void add_cnt() {
    cnt_++;
  }

  int get_cnt() {
    return cnt_;
  }

  void print();

private:
  int cnt_;

};


#endif //TEST_GITHUB_TESTCOUNT_H
