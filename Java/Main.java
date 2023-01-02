import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException 
    {
        Scanner in = new Scanner(System.in);
        int[] cVal = new int[4];
        int val;

        cVal[0] = in.nextInt();
        cVal[1] = in.nextInt();
        cVal[2] = in.nextInt();
        cVal[3] = in.nextInt();

        for(int i = 0; i < 4; i++)
        {    
            val = cVal[i];
            for(int j = 0;j < 4; j++)
                if(cVal[j] > cVal[j+1])
                {
                    int aux = cVal[j+1];
                    cVal[j+1] = cVal[j];
                    cVal[j] = aux;
                }
        }

        
        
    }
 
}