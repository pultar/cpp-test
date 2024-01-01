#include <iostream>

struct Vector3 {
  float x, y, z;
};

int main() {
  Vector3 vec1 = Vector3(0.0f, 1.0f, -3.2f);
  Vector3 vec2 = Vector3(-1.1f, 20.0f, 32.1f);
  std::cout << vec1.x + vec2.x << std::endl;
}
