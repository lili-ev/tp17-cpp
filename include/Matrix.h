
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T, int N, int M>
class Matrix {
private:
    T donnees[N][M];

public:
    // Constructeur par defaut
    Matrix() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                donnees[i][j] = T();
            }
        }
    }

    // Acces aux elements
    T& at(int i, int j) {
        if (i < 0 || i >= N || j < 0 || j >= M) {
            throw out_of_range("Indice invalide");
        }
        return donnees[i][j];
    }

    const T& at(int i, int j) const {
        if (i < 0 || i >= N || j < 0 || j >= M) {
            throw out_of_range("Indice invalide");
        }
        return donnees[i][j];
    }

    // Addition de deux matrices
    Matrix<T, N, M> operator+(const Matrix<T, N, M>& autre) const {
        Matrix<T, N, M> resultat;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                resultat.donnees[i][j] =
                    donnees[i][j] + autre.donnees[i][j];
            }
        }

        return resultat;
    }

    // Multiplication de matrices
    template <int P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& autre) const {
        Matrix<T, N, P> resultat;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < P; j++) {
                for (int k = 0; k < M; k++) {
                    resultat.at(i, j) +=
                        donnees[i][k] * autre.at(k, j);
                }
            }
        }

        return resultat;
    }

    // Operateur d'affichage
    friend ostream& operator<<(ostream& os, const Matrix<T, N, M>& mat) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                os << mat.donnees[i][j] << " ";
            }
            os << endl;
        }

        return os;
    }
};

#endif
