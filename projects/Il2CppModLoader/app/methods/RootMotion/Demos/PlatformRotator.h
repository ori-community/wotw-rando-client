#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::Demos::PlatformRotator {
    IL2CPP_REGISTER_METHOD(0x0222D600, void, Start, (app::PlatformRotator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222D9A0, void, FixedUpdate, (app::PlatformRotator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222DE60, app::IEnumerator*, SwitchRotation, (app::PlatformRotator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222DFB0, void, OnCollisionEnter, (app::PlatformRotator * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x0222E120, void, OnCollisionExit, (app::PlatformRotator * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x0222E290, void, ctor, (app::PlatformRotator * this_ptr))
} // namespace app::classes::RootMotion::Demos::PlatformRotator
