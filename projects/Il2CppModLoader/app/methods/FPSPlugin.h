#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FPSPlugin {
    IL2CPP_REGISTER_METHOD(0x0098AD90, void, Awake, (app::FPSPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098B0A0, void, Update, (app::FPSPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098B120, void, PlayCycle, (app::FPSPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x0098B170, void, RecordCycle, (app::FPSPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x0098B270, void, Exit, (app::FPSPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098B310, void, OnDestroy, (app::FPSPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098B3B0, void, OnApplicationQuit, (app::FPSPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FPSPlugin * this_ptr))
} // namespace app::classes::FPSPlugin
