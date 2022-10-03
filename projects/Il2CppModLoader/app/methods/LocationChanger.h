#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LocationChanger {
    IL2CPP_REGISTER_METHOD(0x00FC1570, void, Start, (app::LocationChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_SceneName, (app::LocationChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_TargetName, (app::LocationChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Transform*, get_TargetTransform, (app::LocationChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC16E0, app::Vector3, TargetOffset, (app::LocationChanger * this_ptr, app::Transform* other))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_UseFader, (app::LocationChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LocationChanger * this_ptr))
} // namespace app::classes::LocationChanger
