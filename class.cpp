#include "class.h"

Lab2::Lab2(int ra, int rb, int k){
setRa(ra);
setRb(rb);
setK(k);
};
void Lab2::setRa(int ra){
Ra=ra;
}
void Lab2::setRb(int rb){
Rb=rb;
}
void Lab2::setK(int k){
K=k;
}
int Lab2::getRa(){
return Ra;
}
int Lab2::getRb(){
return Rb;
}
int Lab2::getK(){
return K;
}
