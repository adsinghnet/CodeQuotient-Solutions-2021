int findOddMan(vector<int> arr) {
  int x=0;
  for(int i=0;i<arr.size();i++)
  {
    x=x^arr[i];
  }
  return x;
}