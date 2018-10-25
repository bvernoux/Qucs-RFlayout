#include "pac.h"
using namespace std;

Pac::Pac(string _label,
			string _type,
			short _mirrorx,
			short _r,
			short _nport) :
	Element(_label, _type, _mirrorx, _r, _nport)
	{}

Pac::~Pac() {
	}

string Pac::getNet1(void) {
	return(m_net1);
	}

string Pac::getNet2(void) {
	return(m_net2);
	}

int Pac::setNet1(string _net1) {
	m_net1=_net1;
	return(0);
	}

int Pac::setNet2(string _net2) {
	m_net2=_net2;
	return(0);
	}

////////////////////////////////////////////////////////////////////////////////

long double Pac::getW(void) {
	return(0);
	}
long double Pac::getW1(void) {
	return(0);
	}
long double Pac::getW2(void) {
	return(0);
	}
long double Pac::getW3(void) {
	return(0);
	}
long double Pac::getW4(void) {
	return(0);
	}
long double Pac::getL(void) {
	return(0);
	}
long double Pac::getD(void) {
	return(0);
	}
long double Pac::getS(void) {
	return(0);
	}
long double Pac::getRi(void) {
	return(0);
	}
long double Pac::getRo(void) {
	return(0);
	}
short Pac::getAlpha(void) {
	return(0);
	}
string Pac::getNet3(void) {
	return("");
	}
string Pac::getNet4(void) {
	return("");
	}
int Pac::setNet3(string _net3) {
	return(1);
	}
int Pac::setNet4(string _net4) {
	return(1);
	}