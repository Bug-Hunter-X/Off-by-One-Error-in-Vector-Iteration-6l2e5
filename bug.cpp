std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i <= myVector.size(); ++i) { // <= is the error
  std::cout << myVector[i] << " ";
}

std::cout << std::endl; //This will cause an out of bounds error