#pragma once

#include "methodunit.h"

class JavaMethodUnit: public MethodUnit
{
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, Unit::Flags flags);

    void add(std::shared_ptr<Unit> unit, Unit::Flags = 0);

    std::string compile(unsigned int level = 0) const;
};
