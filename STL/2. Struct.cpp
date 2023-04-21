#include <bits/stdc++.h>
using namespace std;

struct point {
  int x, y;
};

struct student {
  string id;
  string name;
  int score;
}p;

bool compare(student x, student y) {
  return x.score > y.score;
}

int main() {
  //making of a point object that holds two int values
  point obj;
  obj.x = 10;
  obj.y = 90;
  cout << obj.x + obj.y << '\n';

  //following p object is already created in the struct syntax
  p.id = "C191090";
  p.name = "Samio";
  p.score = 33;
  cout << p.id << ' ' << p.name << ' ' << p.score << '\n';

  //arrays of student object;
  int n = 3;
  student ar[n];
  for(int i = 0; i < n; i++) {
    cout << "Student's ID : ";
    cin >> ar[i].id;
    cout << "Student's Name : ";
    cin >> ar[i].name;
    cout << "Student's score : ";
    cin >> ar[i].score;
  }

  //struct arrays can also be sorted
  sort(ar, ar + n, compare);
  //sort function has no idea how to sort a struct array, so you have to guide it using a comparator function

  for(int i = 0; i < n; i++) {
    cout << "Student's ID : " << ar[i].id << '\n';
    cout << "Student's Name : " << ar[i].name << '\n';
    cout << "Student's score : " << ar[i].score << '\n';
  }
}
