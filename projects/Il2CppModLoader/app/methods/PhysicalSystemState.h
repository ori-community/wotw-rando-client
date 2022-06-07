#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PhysicalSystemState {
    IL2CPP_REGISTER_METHOD(0x014FB5B0, void, Init, (app::PhysicalSystemState * this_ptr, app::PhysicalSystemManager * manager))
    IL2CPP_REGISTER_METHOD(0x014FB8F0, void, Apply, (app::PhysicalSystemState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707D00, PhysicalSystemState_Apply__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014FB940, void, SetIterations, (app::PhysicalSystemState * this_ptr, app::Rigidbody__Array * bodies, int32_t iterations))
    IL2CPP_REGISTER_METHOD(0x014FBAD0, void, ctor, (app::PhysicalSystemState * this_ptr))
}
