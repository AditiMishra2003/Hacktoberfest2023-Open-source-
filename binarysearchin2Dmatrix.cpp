//Here is the solution to find an elemnt in an entirely sorted 2D matrix using binary search.
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        int start=0;
        int end=(n*m)-1;
        while(start<=end){
            int mid=(start+end)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target){
                return true;
            }
            else if(target<matrix[row][col]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;

    }
};
