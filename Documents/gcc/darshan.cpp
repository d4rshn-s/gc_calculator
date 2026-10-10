#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
string seq = "ATGCGATCGATCGATCGAATTCG"; 
int gc_count = 0; 
for (int i = 0; i<seq.length(); i++) { char base=seq[i];
if (base == 'G' || base == 'C') { 
gc_count++;
} 
}
double gc_percentage = (static_cast<double> (gc_count)/seq.length())*100;
cout << "GC Content: "<< gc_percentage << "%" << endl; 
return 0;
}


