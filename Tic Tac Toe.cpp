#include <iostream>
#include<queue>
#include<string>
using namespace std;
//tik tak toe

class tic_tac_toe
{
    public:
    
    queue<string>lr1;//row
    queue<string>lr2;//row
    queue<string>lr3;//row
    queue<string>lc1;//col
    queue<string>lc2;//col
    queue<string>lc3;//col
    queue<string>ld1;//digo
    queue<string>ld2;//digo
    
    string a="0";string b="1";string c="2";string d="3";string e="4";string f="5";string g="6";string h="7";string i="8";
    
    
    
    
    
    tic_tac_toe(){
        cout<<"######### Tic Tac Toe #########\n";
        cout<<"\n";
    }
    
    int chack_q( queue<string>*que )
    {
        string arr[3];
        
        
        
        int i=0;
        while (!que->empty()) {
            //cout << '\t' << g.front();
            //cout<<que->size();
            string a=que->front();
            que->pop();
            arr[i]=a;
            
            i++;
           // cout<<arr[0]<<arr[1];
            
        }
        
        if(arr[0]=="+" && arr[1]=="+"&&arr[2]=="+"){
            cout<<"\n##### player1 winner ######";
            return 1;
        }
        else if(arr[0]=="#"&&arr[1]=="#"&&arr[2]=="#"){
            cout<<"\n##### player2 is winner #####\n";
            return 2;
        }
        return 0;
            
        
        //return a;
        
        
    } 
    void cheack_winner(){
        
    }

    
    int player1(){
        int val;
        if (lr1.size()==3||lr2.size()==3||lr3.size()==3||lc1.size()==3||lc2.size()==3||lc3.size()==3||ld1.size()==3||ld2.size()==3)
        {
            if (chack_q(&lr1)==1||chack_q(&lr2)==1||chack_q(&lr3)==1||chack_q(&lc1)==1||chack_q(&lc2)==1||chack_q(&lc3)==1||chack_q(&ld1)==1||chack_q(&ld2)==1){
                return 1;
            
            }
        }
        cout<<"\nplayer1 :";
        cout<<"\nenter the key (+) :";
        cin>>val;
        swich_case(val,"+");
        return 0;
        
    }
    
    int player2(){
        if (lr1.size()==3||lr2.size()==3||lr3.size()==3||lc1.size()==3||lc2.size()==3||lc3.size()==3||ld1.size()==3||ld2.size()==3)
        {
            if (chack_q(&lr1)==2||chack_q(&lr2)==2||chack_q(&lr3)==2||chack_q(&lc1)==2||chack_q(&lc2)==2||chack_q(&lc3)==2||chack_q(&ld1)==2||chack_q(&ld2)==2){
                
                return 1;
            
                
            }
            return 0;
        }
    
            
        cout<<"\nplayer2 :";    
        
        int val;
        cout<<"\nenter the key (#) :";
        cin>>val;
        swich_case(val,"#");
        return 0;
        
        
    }
    
    
    void swich_case(int cas_e=9,string player_ico="none")
    {
        string val=player_ico;
        switch(cas_e){
            case 0:
            ld1.push(val);
            lr1.push(val);
            lc1.push(val);
            this->a=val;
            dash_bord();break;
            case 1:
            
            lr1.push(val);
            lc2.push(val);
            this->b=val;
            dash_bord();
            break;
            case 2:
            
            lr1.push(val);
            lc3.push(val);
            this->c=val;
            dash_bord();
            break;
            case 3:
            
            lr2.push(val);
            lc1.push(val);
            this->d=val;
            dash_bord();
            break;
            case 4:
            
            ld2.push(val);
            ld1.push(val);
            lc2.push(val);
            lr2.push(val);
            this->e=val;
            dash_bord();
            break;
            case 5:
            
            lr2.push(val);
            lc3.push(val);
            this->f=val;
            dash_bord();
            break;
            case 6:
            
            lr3.push(val);
            lc1.push(val);
            this->g=val;
            dash_bord();
            
            break;
            case 7:
            
            lr3.push(val);
            lc2.push(val);
            this->h=val;
            dash_bord();
            break;
            case 8:
            
            ld1.push(val);
            lr3.push(val);
            lc3.push(val);
            this->i=val;
            dash_bord();
            break;
            
            
            
            
            default:
            cout<<"wrong value insert";break;
            
            
        }
        
        
        
        
        
        
    }

    void dash_bord(){
        //string a="0",string b="1",string c="2",string d="3" ,string e="4",string f="5",string g="6",string h="7" ,string i ="8"){
        //this->a=a;this->b=b;this->c=c;this->d=d;this->e=e;this->f=f;this->g=g;this->h=h;this->i=i;
        
        
        cout<<"\n==============";
        cout<<"\n|\t"<<this->a<<"|\t"<<this->b<<"|\t"<<this->c<<"|\t";
        cout<<"\n==============";
        cout<<"\n|\t"<<this->d<<"|\t"<<this->e<<"|\t"<<this->f<<"|\t";
        cout<<"\n==============";
        cout<<"\n|\t"<<this->g<<"|\t"<<this->h<<"|\t"<<this->i<<"|\t";
        cout<<"\n==============\n";
        
    }
    
    
};





int main() {
    // Write C++ code here
    tic_tac_toe game;
    game.dash_bord();
    while(true){
        if(game.player1()==1){
            cout<<game.player1();
            break;
        }
        
        else if(game.player2()==1){
            break;
        }
        
    }
    //game.dash_bord();
    //cout<<game.chack_q();

    return 0;
}

