// arrstruc.cpp -- an array of structures
#include <iostream>
struct inflatable
{
  char name[20];
  float volume;
  double price;
};

struct widget
{
  char name[20];
  int type;
  union id
  {
    int id_num;
    char id_char[20];
  } id_val;
};

int main()
{
  using namespace std;
  inflatable guest[2] = {
      {"Bambi", 0.5, 21.99},
      {"Godzilla", 2000, 565.99}};

  cout << "The guests " << guest[0].name << " and "
       << guest[1].name << "\nhave a combined volume of "
       << guest[0].volume + guest[1].volume << " cubic feet.\n";
  
  widget w = {"Widget", 1};
  cout << "Enter widget type: ";
  cin >> w.type;
  cin.get();
  cout << "Enter id value: ";
  if (w.type == 1)
  {
    cin >> w.id_val.id_num;
    cout << "id_num: " << w.id_val.id_num << endl;
  }
  else
  {
    cin.getline(w.id_val.id_char, 20);
    cout << "id_char: " << w.id_val.id_char << endl;
  }

  cout << endl;
  cout << "Enter widget type: ";
  cin >> w.type;
  cin.get();
  cout << "Enter id value: ";
  if (w.type == 1)
  {
    cin >> w.id_val.id_num;
    cout << "id_num: " << w.id_val.id_num << endl;
  }
  else
  {
    cin.getline(w.id_val.id_char, 20);
    cout << "id_char: " << w.id_val.id_char << endl;
  }

  return 0;
}
