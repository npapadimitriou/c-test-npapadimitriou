#include <iostream>

#include <stdlib.h>

int main() {
  // default to 0
  int n = 0;

  std::cout<<"Give n"<<std::endl;
  std::cin >> n;
  std::string res;

  

  // top half
  for (int i = 0; i < n; i++) {
   
    int offset = n - i - 1;

    
    for (int j = 0; j < offset; j++) {
      res.append(" ");
    }


    int drawable = 2*n - 1 - offset;
    for (int j = 0; j < drawable; j++) {
      if (((i == 0 || i == n-1) && j < n) 
          || (j == 0) 
          || (j == drawable - 1) 
          || (j == n - 1)) { 
        res.append("#");
      } else {
        res.append("*");
      }
    }

    res.append("\n");
  }

  // bottom half
  for (int i = 1; i < n; i++) {
    // this time the offset is from the right
    int offset = i;

    int drawable = 2*n - 1 - offset;
    for (int j = 0; j < drawable; j++) {
      if (i == 0 || i == n-1 || j == 0 || j == drawable - 1 || j == n-1) {
        res.append("#");
      } else if (j > n - 1) {
        res.append("*");
      } else {
        res.append(" ");
      }
    }
    res.append("\n");
  }

  std::cout << res << std::endl;

  return 0;
}
