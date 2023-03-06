#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    int Matricula;
    string Nome;
    string Disciplina;
};

int main() {
    Aluno alunos[4];

    for (int i = 0; i < 4; i++) {
        cout << "Aluno " << i+1 << ":" << endl;
        cout << "Número de matrícula: ";
        cin >> alunos[i].Matricula;
        cout << "Nome: ";
        cin >> alunos[i].Nome;
        cout << "Disciplina: ";
        cin >> alunos[i].Disciplina;
    }

    cout << "Lista de alunos:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << alunos[i].Nome << endl;
    }

    return 0;
}
