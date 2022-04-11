#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::string namaibu;
	std::vector<float> ips;

public:
	mahasiswa(std::string id, std::string nama,std::string namaibu, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	std::string getNRP();
	std::string getDepartemen();

	std::string getNamaibu();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif
