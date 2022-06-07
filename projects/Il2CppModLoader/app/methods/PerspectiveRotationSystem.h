#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PerspectiveRotationSystem {
    IL2CPP_REGISTER_METHOD(0x00499EF0, app::PerspectiveRotationSystem *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0049A120, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0049A1C0, void, Awake, (app::PerspectiveRotationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049A1D0, void, LateUpdate, (app::PerspectiveRotationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049A3F0, void, OnActiveChange, (app::PerspectiveRotationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049A590, void, Register, (app::PerspectiveRotationSystem * this_ptr, app::PerspectiveRotationAdjustment * transform))
    IL2CPP_REGISTER_METHOD(0x0049A680, void, Unregister, (app::PerspectiveRotationSystem * this_ptr, app::PerspectiveRotationAdjustment * transform))
    IL2CPP_REGISTER_METHOD(0x0049A720, void, UpdateRotation, (app::PerspectiveRotationAdjustment * target))
    IL2CPP_REGISTER_METHOD(0x0049A9B0, void, ResetRotation, (app::PerspectiveRotationAdjustment * target))
    IL2CPP_REGISTER_METHOD(0x0049AA90, void, ctor, (app::PerspectiveRotationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
