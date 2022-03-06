/*GOAL: Practice writing to the console and learn 
 **the variables types available in C++
 **Print the sizes of each variable to the console.
 **Print them in the following order:
 **int, short, long, char, float, double, bool
 */

 #include <iostream>
 int main()
 {
     using namespace std;
     cout<<"int size = "<<sizeof(int)<<"\n\n";
     cout<<"short size = "<<sizeof(short)<<"\n\n";
     cout<<"long size = "<<sizeof(long)<<"\n\n";
     cout<<"char size = "<<sizeof(char)<<"\n\n";
     cout<<"float size = "<<sizeof(float)<<"\n\n";
     cout<<"double size = "<<sizeof(double)<<"\n\n";
     cout<<"bool size = "<<sizeof(bool)<<"\n\n";
     cout<<endl;
     return 0;
 }