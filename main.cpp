#include <iostream>
#include <vector>
#include<math.h>


using namespace std;

int main()
{
    vector<double> values;
    unsigned int numberValues; 
    double sum = 0;
    double mean = 0;
    double varin = 0;
    double stanDev;
    /**
     Prompt the user and get the number of values to enter
     **/
     cout << "Enter number of values" << endl;
     cin >> numberValues;
    
    /**
     Get the values from the user and store in a vector
     **/
     for (unsigned int count = 0; count < numberValues; count++) {
         double value;
         cout << "Enter value " << count << ":" << " ";
         cin >> value;
         values.push_back(value);
    }
    
    /**
     Calculate and display the mean and standard deviation
     **/
     for (int i = 0; i < numberValues; i++) {
         sum+=values[i];
     }

     mean = sum/numberValues;

     for (int x = 0; x < numberValues; x++) {
         varin += (values[x] - mean) * (values[x] - mean);
 
     }

     varin /= (numberValues - 1);
     stanDev = sqrt(varin);

     cout << "The mean is: " << mean;
     cout << "\nThe standard deviation is: " << stanDev << "\n";

    
    return 0;
}
