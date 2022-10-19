import java.util.*;
import java.io.*;
public class LCS {

	public static int lcs(String s, String t) {
		//Your code goes here
        int n = s.length();
        int m = t.length();
        int[][] dp = new int[n][m];
        for(int[] a: dp) {
            Arrays.fill(a , -1);
        }
        return f(n-1, m-1 , s , t ,dp);
    }
    static int f(int i , int j , String s , String t, int[][]dp) {
        // base case
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s.charAt(i)==t.charAt(j)) {
            return dp[i][j] = 1+ f(i-1 , j-1 ,s , t ,dp);
        }
        
            return dp[i][j] = 0+ Math.max(f(i-1,j,s ,t, dp) , f(i, j-1 , s, t , dp));
       
    }
    

}
