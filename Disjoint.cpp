void initialize( int Arr[ ], int N)
    {
        for(int i = 0;i<N;i++)
        Arr[ i ] = i ;
    }
    //returns true if A and B are connected, else returns false 
     bool find( int Arr[ ], int A, int B)                           
    {
    if(Arr[ A ] == Arr[ B ])
    return true;
    else
    return false;   
    }
    //change all entries from arr[ A ] to arr[ B ].
    void union(int Arr[ ], int N, int A, int B)
    {
        int temp = Arr[ A ];
    for(int i = 0; i < N;i++)
        {
        if(Arr[ i ] == temp)
        Arr[ i ] = Arr[ B ]; 
        }
    }
