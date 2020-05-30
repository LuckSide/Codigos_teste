#include <iostream> /* rever audios do luiz felipe */

using namespace std;

int main() {

  int c;
  int r = 0;
  int v[10005];

  cin >> c;

  for (int i = 1; i <= c + 1; i++)
  {
      v[i] = 1;
  }

  for (int i = 1; i <= c; i++)
  {
      cin >> v[i];
  }

  for (int i = 1; i <= c - 1 && r != -1 ; i++)
  {

    if (v[i+2] >= 1 && v[i] >= 1)
    {
      r = r + 1;
      i = i + 1;
    }

    else
    {

      if (v[i+1] >= 1 && v[i] >= 1)
      {
          r = r + 1;
          i = i;
      }
      else
      {
        if (v[i+1] <= 0 && v[i+2] <= 0 && v[i] >= 1)
        {
          r = -1;
        }
      }
    }
  }

  cout << r;

  return 0;
}
