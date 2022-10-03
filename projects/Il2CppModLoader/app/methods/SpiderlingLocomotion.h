#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiderlingLocomotion {
    IL2CPP_REGISTER_METHOD(0x011C5920, float, get_ContinousRotationSpeed, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5930, void, set_ContinousRotationSpeed, (app::SpiderlingLocomotion * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011C5940, bool, get_IsSpinning, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5920, float, get_ContinousRotation, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01116570, float, get_TimeOnGround, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5960, void, SetStickToSurfaces, (app::SpiderlingLocomotion * this_ptr, bool stick_to_surfaces))
    IL2CPP_REGISTER_METHOD(0x011C5980, void, OnEnable, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5B70, void, OnDisable, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5DA0, void, OnEntityReset, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5ED0, void, DamageReceived, (app::SpiderlingLocomotion * this_ptr, app::DamageResult obj))
    IL2CPP_REGISTER_METHODINFO(0x04769B78, SpiderlingLocomotion_DamageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011C5EE0, void, OnFixedUpdate, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C6590, bool, ShouldStartFalling, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C6700, void, OnDrawGizmosSelected, (app::SpiderlingLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C6AD0, void, ctor, (app::SpiderlingLocomotion * this_ptr))
} // namespace app::classes::SpiderlingLocomotion
