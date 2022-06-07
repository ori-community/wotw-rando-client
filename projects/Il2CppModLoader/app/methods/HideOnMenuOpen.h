#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HideOnMenuOpen {
    IL2CPP_REGISTER_METHOD(0x00B4A180, void, Awake, (app::HideOnMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B4A420, void, OnDestroy, (app::HideOnMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnMenuOpen, (app::HideOnMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475C428, HideOnMenuOpen_OnMenuOpen__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, OnMenuClose, (app::HideOnMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737B80, HideOnMenuOpen_OnMenuClose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HideOnMenuOpen * this_ptr))
}
