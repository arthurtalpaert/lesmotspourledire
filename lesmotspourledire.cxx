//============================================================================
// Name        : lesmotspourledire.cxx
// Author      : Arthur Talpaert
// Version     :
// Copyright   : CDMATH group
// Description : Boileau tools sandbox
//============================================================================

#include <iostream>
#include <petsc.h>

#include "LinearSolver.hxx"

using namespace std;


int
main() {
	cout << "Beginning of Boileau Les mots pour le dire." << endl;

	int nw = 10;

	Matrix myDenseMatrix = Matrix(nw, nw);
	for (int row=0; row<nw; row++)
		for (int col=0; col<nw; col++)
			myDenseMatrix(row, col) = row + col;
	Vector secondMember = Vector(nw);
	for (int row=0; row<nw; row++)
		secondMember(row) = row;

	int maxIterLS = 50;
	double tolLS = 1E-10;

	// No Valgrind problem until here.

	// Constructor with data, dense matrix
	LinearSolver myLinearSolver(myDenseMatrix, secondMember, maxIterLS, tolLS, "LU");
	//myLinearSolver.setTolerance(tolLS);
	//Vector solution = myLinearSolver.solve();

    cout << "End of Boileau Les mots pour le dire." << endl;
    return (0);
}
