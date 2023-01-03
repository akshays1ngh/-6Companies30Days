class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        long long n=tokens.size(),top=-1,i;
        if(n==1)
            return stoi(tokens[0]);
        long long stack[n];
        for(i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                while(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                    stack[++top]=stoi(tokens[i]);
                    i++;
                }
            }
            long long num1=stack[top--];
            long long num2=stack[top--];
                if(tokens[i]=="+")
                    stack[++top]=num2+num1;
                else if(tokens[i]=="-")
                    stack[++top]=num2-num1;
                else if(tokens[i]=="*")
                    stack[++top]=num2*num1;
                else if(tokens[i]=="/")
                    stack[++top]=num2/num1;
        }
        return stack[top];
    }
};