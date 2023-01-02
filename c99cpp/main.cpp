#include <iostream>

using namespace std;

int main()
{
    int par[5], impar[5],val, inP, inI, cP, cI;
    inP = inI =  cP =  cI = 0;

    for(int i = 0; i < 15; i++)
    {
        cin >> val;

        if(val % 2 == 0)
        {
            if(inP == 5)
            {
                for(int j = 0; j < 5; j++)
                    cout << "par[" << j << "] = " << par[j] << endl;
                inP = 0;
                cP = 0;
            }
            par[inP] = val;
            inP++;
            cP++;
        }
        else
        {
            if(inI == 5)
            {
                for(int j = 0; j < 5; j++)
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                inI = 0;
                cI = 0;
            }
            impar[inI] = val;
            inI++;
            cI++;
        }
    }

    for(int i = 0; i < cI; i++)
        cout << "impar[" << i << "] = " << impar[i] << endl;
    for(int i = 0; i < cP; i++)
        cout << "par[" << i << "] = " << par[i] << endl;
        
    return 0;
}