#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraScrollLock {
    IL2CPP_REGISTER_METHOD(0x00C3DF40, app::Vector3, get_ScrollCenter, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A2480, void, set_ScrollCenter, (app::CameraScrollLock * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x016A2490, app::Vector3, get_HalfScrollSize, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A24B0, void, set_HalfScrollSize, (app::CameraScrollLock * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00653FB0, app::CameraScrollLock_Type__Enum, get_ScrollType, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A24C0, void, Awake, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A24D0, app::Rect, get_BoundingRect, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A2750, void, OnEnable, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A2BD0, void, Init, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A3050, void, OnDisable, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::SelectableCategory__Enum, get_Category, (app::CameraScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::CameraScrollLock * this_ptr))
} // namespace app::classes::CameraScrollLock
