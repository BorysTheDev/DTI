#pragma once

struct SGiven;
struct SDPoint;

typedef std::complex<double> Complex;

class C2DCalcManager
{
public:
	CCalcManager(const SGiven& given);
	
	const std::vector<SDPoint>& GetDiscreteContours();
	const std::vector<Complex>& GetDiscreteCurrents();
	
	Complex Field(SDPoint point);
	Complex FarField(double angle);
	
	void Discretize();
	
private:
	//fields
};