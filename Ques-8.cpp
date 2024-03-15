8. Find the error.

double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}

OUTPUT :
In function we pass a value balance[0], but the function it only accept the array.