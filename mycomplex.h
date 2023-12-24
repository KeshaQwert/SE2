/**
 * @file mycomplex.h
 * @brief ������������ ���� � ����������� ������ Complex.
 */

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

/**
 * @class Complex
 * @brief �����, �������������� ����������� �����.
 */

class Complex
{ 
	double Re; /**< �������������� ����� ������������ �����. */
	double Im; /**< ������ ����� ������������ �����. */

public:

	/**
	 * @brief ����������� ������ Complex.
	 * @param aRe �������������� ����� (�� ��������� 0).
	 * @param aIm ������ ����� (�� ��������� 0).
	 */

	Complex ( double aRe = 0, double aIm = 0 ); 

	/**
	 * @brief ����������� ����������� ������ Complex.
	 * @param a ������ Complex ��� �����������.
	 */

	Complex ( const Complex & ); 

	/**
	 * @brief ���������� ������ Complex.
	 */

	~Complex (); 

	/**
	 * @brief ������������� �������� �������������� � ������ ������ ������������ �����.
	 * @param aRe �������������� �����.
	 * @param aIm ������ ����� (�� ��������� 0).
	 */

	void Set ( double aRe, double aIm = 0 ); 

	/**
	 * @brief �������� ���������� � ���� double, ������������ ������ ������������ �����.
	 * @return ������ ������������ �����.
	 */

	operator double (); 

	/**
	 * @brief ��������� � ���������� ������ ������������ �����.
	 * @return ������ ������������ �����.
	 */

	double abs (); 


	/**
	 * @brief �������� ����� �� ������ ��� ������� Complex.
	 * @param stream ������� �����.
	 * @param a ������ Complex ��� �����.
	 * @return ������� ����� ����� �������� �����.
	 */

	friend istream & operator >> ( istream &, Complex & ); 

	/**
	 * @brief �������� ������ � ����� ��� ������� Complex.
	 * @param stream �������� �����.
	 * @param a ������ Complex ��� ������.
	 * @return �������� ����� ����� �������� ������.
	 */

	friend ostream & operator << ( ostream &, Complex & ); 


	/**
	 * @brief �������� �������� ��� �������� Complex.
	 * @param aRval ������ Complex ��� ��������.
	 * @return ��������� ��������.
	 */

	Complex operator + ( const Complex & ); 

	/**
	 * @brief �������� ��������� ��� �������� Complex.
	 * @param aRval ������ Complex ��� ���������.
	 * @return ��������� ���������.
	 */

	Complex operator - ( const Complex & ); 

	/**
	 * @brief �������� �������� ��� ������� Complex � �������� ���� double.
	 * @param aval �������� ���� double ��� ��������.
	 * @return ��������� ��������.
	 */

	Complex operator + ( const double &) ; 

	/**
	 * @brief ������������� �������� �������� ��� �������� ���� double � ������� Complex.
	 * @param aLval �������� ���� double.
	 * @param aRval ������ Complex.
	 * @return ��������� ��������.
	 */

	friend Complex operator + ( const double &, const Complex & ); 

	/**
	 * @brief �������� ��������� ��� ������� Complex � �������� ���� double.
	 * @param aRval �������� ���� double ��� ���������.
	 * @return ��������� ���������.
	 */

	Complex operator - ( const double & ); 

	/**
	 * @brief ������������� �������� ��������� ��� �������� ���� double � ������� Complex.
	 * @param aLval �������� ���� double.
	 * @param aRval ������ Complex.
	 * @return ��������� ���������.
	 */

	friend Complex operator - ( const double &, const Complex & ); 

	/**
	 * @brief �������� ��������� ��� �������� Complex.
	 * @param aRval ������ Complex ��� ���������.
	 * @return ��������� ���������.
	 */

	Complex operator * ( const Complex & ); 

	/**
	 * @brief �������� ��������� ��� ������� Complex � �������� ���� double.
	 * @param aRval �������� ���� double ��� ���������.
	 * @return ��������� ���������.
	 */

	Complex operator * ( const double & ); 

	/**
	 * @brief ������������� �������� ��������� ��� �������� ���� double � ������� Complex.
	 * @param aLval �������� ���� double.
	 * @param a ������ Complex.
	 * @return ��������� ���������.
	 */

	friend Complex operator * ( const double &, const Complex & ); 

	/**
	 * @brief �������� ������� ��� ������� Complex � �������� ���� double.
	 * @param aRval �������� ���� double ��� �������.
	 * @return ��������� �������.
	 */

	Complex operator / ( const double & ); 


	/**
	 * @brief ����������� �������� �������� ��� �������� Complex.
	 * @param arval ������ Complex ��� ��������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

	Complex & operator += ( const Complex & ); 

	/**
	 * @brief ����������� �������� ��������� ��� �������� Complex.
	 * @param aRval ������ Complex ��� ���������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

	Complex & operator -= ( const Complex & ); 

	/**
	 * @brief ����������� �������� ��������� ��� �������� Complex.
	 * @param aRval ������ Complex ��� ���������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

    Complex & operator *= ( const Complex & ); 

	/**
	 * @brief ����������� �������� �������� ��� ������� Complex � �������� ���� double.
	 * @param aRval �������� ���� double ��� ��������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

	Complex & operator += ( const double & ); 

	/**
	 * @brief ����������� �������� ��������� ��� ������� Complex � �������� ���� double.
	 * @param aRval �������� ���� double ��� ���������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

	Complex & operator -= ( const double & ); 

	/**
	 * @brief ����������� �������� ��������� ��� ������� Complex � �������� ���� double.
	 * @param aRval �������� ���� double ��� ���������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

	Complex & operator *= ( const double & ); 

	/**
	 * @brief ����������� �������� ������� ��� ������� Complex � �������� ���� double.
	 * @param aRval �������� ���� double ��� �������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

	Complex & operator /= ( const double & ); 

	/**
	 * @brief �������� ������������ ��� �������� Complex.
	 * @param aRval ������ Complex ��� ������������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

	Complex & operator = ( const Complex & ); 

	/**
	 * @brief �������� ������������ ��� �������� ���� double.
	 * @param aRval �������� ���� double ��� ������������.
	 * @return ������ �� ���������������� ������ Complex.
	 */

	Complex & operator = ( const double & ); 
}; 
#endif
