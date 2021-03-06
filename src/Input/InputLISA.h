#pragma once

#include <Input/InputData.h>
#include <Input/InputCreate.h>
#include <string>

namespace Input{

    namespace LISA{
        Status Load(Input::Data& input, std::string filepath);
    }

}