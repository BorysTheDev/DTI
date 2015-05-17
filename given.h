#pragma once

class CContour;

struct SGiven
{
    std::vector<CContourPtr> Contours;
    int ContoursPointsNumber = 200;
    
    std::vector<CFieldPtr> Fields;
    double WaveNumber;
};

typedef Given Params;