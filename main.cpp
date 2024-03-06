#include <iostream>
#include <vector>
// Simple sort
std::vector<int> SimpleSort(std::vector<int> v) {
  for (auto i = 0; i < v.size(); i++) {
    for (auto n = i + 1; n < v.size(); n++) {
      if (v[i] > v[n]) {
        auto h = v[i];
        v[i] = v[n];
        v[n] = h;
      }
    }
  }
  return v;
}

void DisplayVec(std::vector<int> v) {
  for (auto i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
}
//=============================================//

void Application() {
  std::cout << "Welcome to SimpleSort"
            << "\nBefore he sorting: ";
  std::vector<int> v = {1, 10, 5, 15, 2, 7, 28, 900, 45, 18, 27};
  DisplayVec(v);

  v = SimpleSort(v);

  std::cout << "\n\nAfter the sorting: ";
  DisplayVec(v);
}

int main(int argc, char **argv) {
  Application();
  return 0;
}
