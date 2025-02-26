#pragma once
#include <string>
#include <vector>
using namespace std;

class Facility;

enum class SettlementType
{
    VILLAGE,
    CITY,
    METROPOLIS,
};

class Settlement
{
public:
    Settlement(const string &name, SettlementType type);
    const string &getName() const;
    SettlementType getType() const;
    const string toString() const;
    const int getConstructionLimit() const;


private:
    const string name;
    SettlementType type;
};