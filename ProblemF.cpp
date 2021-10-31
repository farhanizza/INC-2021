#include<iostream>
#include<string>

bool check(std::string str, int A, int B){
    int len = str.length();
    while(A<B){
        if(str[A] != str[B]){
            return false;
        }
        A++;
        B--;
    }
    return true;
}

int main(){
    std::string input;
    std::cin>>input;

    int len = input.length();
    int flag = 0;

    for(int i = 1; i < len; i++){
        if(check(input, 0, i-1) && check(input, i, len-1)){
            flag = 1;
            std::cout<< input.substr(0, i) << " " << input.substr(i, len-i) << std::endl;
            break;
        }else{
            continue;
        }
    }
    
    if(flag == 0){
        std::cout<<"NO"<<std::endl;
    }

}
