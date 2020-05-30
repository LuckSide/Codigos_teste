#include <iostream>

using namespace std;

int matriz[1005][1005];

int main()
{
  int m, n;
  int r = 0;

  cin >> n >> m;

  for (int i = 0; i <= n + 1; i++)
  {
    for (int j = 0; j <= m + 1; j++)
    {
      matriz[i][j] = 0;
    }
  }


  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> matriz[i][j];
    }
  }

  for (int i = 1; i <= n ; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (matriz[i][j] == 1 && matriz[i - 1][j] == 0 && matriz[i][j-1] == 0 && matriz[i][j+4] != 1)
      {
            r = r + 1;
      }
      else
      {
        if(matriz[i][j] == 1 && matriz[i - 1][j] == 0 && matriz[i][j-1] == 0 && matriz[i][j+4] == 1 && matriz[i-1][j + 4] != 1 && matriz[i + 1][j] == 0)
        {
            r = r + 1;
        }
      }
    }
  }

  cout << r;

  return 0;
}
