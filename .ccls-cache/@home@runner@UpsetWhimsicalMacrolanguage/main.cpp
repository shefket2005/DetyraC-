#include <iostream>
using namespace std;

int main() {
  cout << "Shkruani emrin dhe mbiemrin tuaj: " << endl;
  string
      emri_juaj; // Perdorim variablen string sepse ne duhet te shkruajm tekst
  getline(cin, emri_juaj);
  cout << "Miresevini " << emri_juaj << endl;

  cout << "Shkruani vitin e lindjes:" << endl;
  int viti_lindjes; // Perdoret variabla int sepse kemi te bejme me numra te
                    // plote
  cin >> viti_lindjes;
  cout << " Viti juaj i lindjes eshte: " << viti_lindjes << endl;

  cout << "Shkruani gjatesin tuaj:" << endl;
  double gjatesia_juaj; // Perdoret variabla double sepse kemi te bejme me numra
                        // me presje dhjetore
  cin >> gjatesia_juaj;
  cout << "Gjatesia juaj eshte: " << gjatesia_juaj << endl;

  cout << "Shkruani peshen tuaj" << endl;
  int pesha_juaj; //
  cin >> pesha_juaj;
  cout << "Pesha juaj eshte: " << pesha_juaj << "kg"
       << endl; // Nese duam te shfaqim kg vecmas duhet te shtojm tekst pas
                // variables
  /// Llogaritja e BMI-s

  int viti_aktual = 2024; // Ketu kemi deklaruar vitin aktual
  int mosha =
      viti_aktual -
      viti_lindjes; // Ketu kemi bere operacionin e zbritjes te vitit aktual te
                    // deklaruar me lart me variablen e vitit te lindjes
  cout << "Mosha juaj aktuale: " << mosha << endl; //
  double bmi =
      pesha_juaj /
      (gjatesia_juaj * gjatesia_juaj); // Kjo variabel ben llogaritjen e BMI-s
  cout << "BMI-ja juaj:" << bmi << endl;
  cout << "Miresevini " << emri_juaj << " Ju jeni " << mosha
       << " vjec, i gjate " << gjatesia_juaj << ". Ju peshoni " << pesha_juaj
       << ". Indexi BMI i juaj eshte " << bmi
       << endl; // Kjo ben llogaritjen e te gjitha variablave
  return 0;
}
