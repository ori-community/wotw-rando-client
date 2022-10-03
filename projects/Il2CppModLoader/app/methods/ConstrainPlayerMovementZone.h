#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ConstrainPlayerMovementZone {
    IL2CPP_REGISTER_METHOD(0x011E6240, void, OnTriggerEnter, (app::ConstrainPlayerMovementZone * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x011E6360, void, OnTriggerExit, (app::ConstrainPlayerMovementZone * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x011E6480, void, Start, (app::ConstrainPlayerMovementZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E6640, void, OnDestroy, (app::ConstrainPlayerMovementZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E6800, void, ModifyHorizontalPlatformMovementSettings, (app::ConstrainPlayerMovementZone * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0472F098, ConstrainPlayerMovementZone_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ConstrainPlayerMovementZone * this_ptr))
} // namespace app::classes::ConstrainPlayerMovementZone
