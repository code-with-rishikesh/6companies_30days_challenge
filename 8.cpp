class DataStream {
public:
int counter=0;
int valuedata,kdata;
    DataStream(int value, int k) {
        valuedata=value;
        kdata=k;
    }
    
    bool consec(int num) {
        num==valuedata?counter++ :counter=0 ;
        if(counter>=kdata )return true ; else return false;
    }
};