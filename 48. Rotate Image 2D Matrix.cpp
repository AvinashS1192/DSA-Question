class Solution {
public:
//transposing the matrix
    void transpose(vector<vector<int>>& matrix){
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }} }
    //swapping the starting col++ and ending col--
    void colswap(vector<vector<int>>& matrix){
        int row=matrix.size();
        int col=matrix[0].size();
        int startcol=0;
        int endcol=col-1;
        for(int i=0;(i<(col/2))&&(startcol<endcol);i++){
            for(int j=0;j<row;j++){
                swap(matrix[j][startcol],matrix[j][endcol]);
            }
            startcol++;
            endcol--; }}

    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        colswap(matrix);

    }  
};
