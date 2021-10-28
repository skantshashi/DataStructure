#include<bits/stdc++.h>
using namespace std;
int print(string sub){
    int n=sub.size();
    if(binary_search(sub.begin(),sub.end(),'1')){
        return 1;

    }
    else return 0;
    for(int i=0;sub[i]!='\0'i++){
        cout<<sub[i];
    }
    cout<<



    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        string str;
        cin>>n>>k;
        cin>>str;
        string sub;
        int res;

        for(int i=0;str[i]!='\0';i++){
            int c=k;
            if(str[i]=='1'){
                while(c!=0){
                    if(str[i]=='1'){
                        str[i]='0';
                        c--;
                        i++;
                    }
                    else if(str[i]=='0'){
                        str[i]='1';
                        c--;i++;
                    }

                }
              res=print(str);
              if(res==0){
                  cout<<"ans"<<endl;
              }
              
               i=i-k; 
                
            }
                
            }
            cout<<"not answer"<<endl;
            
        
        
    }
}