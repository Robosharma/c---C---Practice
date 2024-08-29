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
        cout << "Enter number of rows for first arrary : ";
        cin >> n;
        cout << "Enter number of colunms for first arrary : ";
        cin >> m;
        cout << "Enter number of rows for first arrary : ";
        cin >> k;
        cout << "Enter number of colunms for first arrary : ";
        cin >> l;
        
        if(n!=l)
        {
            cout << "Multiplication not possible!" << endl;
            exit(0);
        }

        arr1 = new int*[n];
        for(int i=0;i<n;i++)
        {
            arr1[i] = new int[m];
        }

        arr2 = new int*[k];
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
            cout << "Enter elements of first Matrix :" << endl ;
            for(int i = 0 ; i<n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {
                    cin >> arr1[i][j];
                }
            }
            cout << "Enter elements of Second Matrix :" << endl ;

            for(int i = 0 ; i<k ; i++)
            {
                for(int j = 0 ; j < l ; j++)
                {
                    cin >> arr2[i][j];
                }
            }
        }
    }

    void display()
    {
        cout << "Fisrt Matrix :" << endl;
        for(int i = 0 ; i<n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {
                    cout << arr1[i][j] << " ";
                }
                cout << "\n";
            }

            cout << "Second Matrix :" << endl;
            for(int i = 0 ; i<k ; i++)
            {
                for(int j = 0 ; j < l ; j++)
                {
                    cout << arr2[i][j] << " ";
                }
                cout << "\n";
            }
    }

    void matrixmultiply()
    {
        cout << "Final matrix after multipliaction is :" << endl;
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << arr1[i][j]*arr2[j][i] << " ";
            }
            cout << endl;
        }
    }

        ~MATRIXMULTIPLICTION() 
        {

            for (int i = 0; i < n; i++) 
            {
                delete[] arr1[i];
            }
                delete[] arr1;

            for (int i = 0; i < k; i++) 
            {
                delete[] arr2[i];
            }
                delete[] arr2;
    }
    
};

int main()
{
    MATRIXMULTIPLICTION ob;
    ob.start();
    ob.input();
    system("cls");
    ob.display();
    ob.matrixmultiply();
    cout << "\nWritten by:\n";
    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 3";
    
    return 0;
}