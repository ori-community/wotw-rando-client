#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EntityPlugin {
    IL2CPP_REGISTER_METHOD(0x00C9F850, void, Awake, (app::EntityPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C9F910, void, PlayCycle, (app::EntityPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00C9FF30, void, RecordCycle, (app::EntityPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00C9FFF0, void, Exit, (app::EntityPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EntityPlugin * this_ptr))
}
