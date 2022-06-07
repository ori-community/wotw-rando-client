#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VerletUndergroundPlantController {
    IL2CPP_REGISTER_METHOD(0x013D3640, void, OnUpdatePhysics, (app::VerletUndergroundPlantController * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x013D3C00, void, ctor, (app::VerletUndergroundPlantController * this_ptr))
}
