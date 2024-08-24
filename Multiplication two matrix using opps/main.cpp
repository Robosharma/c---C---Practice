#include<iostream>
using namespace std;

class MATRIXMULTIPLICTION
{
    public:
    int n,m,k,l;
    int** arr1;
    int** arr2;

    void start()
    {
        cout << "Enter number of rows for first arrar";
        cin >> n;
        cout << "Enter number of colunms for first arrar";
        cin >> m;
        cout << "Enter number of rows for first arrar";
        cin >> k;
        cout << "Enter number of colunms for first arrar";
        cin >> l;

        int** arr1 = new int*[n];
        for(int i=0;i<n;i++)
        {
            arr1[i] = new int[m];
        }

        int** arr2 = new int*[k];
        for(int i=0;i<k;i++)
        {
            arr2[i] = new int[l];
        }
    }

    void input()
    {
        if(arr1 == NULL && arr2 == NULL)
        {
            cout << "Memory not allocated!";
        }
        else
        {
            for(int i = 0 ; i<n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {
                    cin >> arr1[i][j];
                }
            }

            for(int i = 0 ; i<k ; i++)
            {
                for(int j = 0 ; j < l ; j++)
                {
                    cin >> arr1[i][j];
                }
            }
        }
    }

    void display()
    {
        for(int i = 0 ; i<n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {
                    cout << arr1[i][j];
                }
            }

            for(int i = 0 ; i<k ; i++)
            {
                for(int j = 0 ; j < l ; j++)
                {
                    cout << arr1[i][j];
                }
            }
    }
    
};