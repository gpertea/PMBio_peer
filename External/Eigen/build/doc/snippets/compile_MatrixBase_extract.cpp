#include <Eigen/Core>
#include <Eigen/Array>
#include <Eigen/LU>
#include <Eigen/Cholesky>
#include <Eigen/Geometry>

using namespace Eigen;
using namespace std;

int main(int, char**)
{
  Matrix3i m = Matrix3i::Random();
cout << "Here is the matrix m:" << endl << m << endl;
cout << "Here is the upper-triangular matrix extracted from m:" << endl
     << m.part<Eigen::UpperTriangular>() << endl;
cout << "Here is the strictly-upper-triangular matrix extracted from m:" << endl
     << m.part<Eigen::StrictlyUpperTriangular>() << endl;
cout << "Here is the unit-lower-triangular matrix extracted from m:" << endl
     << m.part<Eigen::UnitLowerTriangular>() << endl;

  return 0;
}