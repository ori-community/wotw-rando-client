#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VSyncToggler {
    IL2CPP_REGISTER_METHOD(0x013B78C0, app::String *, get_Path, (app::VSyncToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B7940, void, Awake, (app::VSyncToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B7990, app::String *, get_Name, (app::VSyncToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B7A10, app::String *, get_HelpText, (app::VSyncToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_Column, (app::VSyncToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B7A90, app::String__Array *, get_ToggleOptions, (app::VSyncToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentToggleOptionId, (app::VSyncToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B7BD0, void, set_CurrentToggleOptionId, (app::VSyncToggler * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VSyncToggler * this_ptr))
}
