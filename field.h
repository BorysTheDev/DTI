#pragma once

class CField
{
	virtual double Hx(double x, double y);
	virtual double Hy(double x, double y);
	virtual double Hz(double x, double y);

	virtual double Ex(double x, double y);
	virtual double Ey(double x, double y);
	virtual double Ez(double x, double y);
}