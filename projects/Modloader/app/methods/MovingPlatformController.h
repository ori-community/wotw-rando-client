#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/MovingPlatformController.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::MovingPlatformController {
    IL2CPP_REGISTER_METHOD(0x0086D7E0, void, Awake, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086D7F0, void, OnEnable, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086DBD0, void, OnDisable, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086DFB0, void, ActivateSmushDamageDealers, app::MovingPlatformController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0086E0B0, void, ActivatePlatformColliders, app::MovingPlatformController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0086E2E0, void, EnablePlatformColliders, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086E2F0, void, IgnoreCollisionWithObject, app::MovingPlatformController* this_ptr, app::Collider* other, bool value)
    IL2CPP_REGISTER_METHOD(0x0086E4D0, void, OnSmushOri, app::MovingPlatformController* this_ptr, app::DamageDealer* dealer, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x0086E8D0, bool, CanEnablePlatforms, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086E980, void, FillUpData, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086F440, void, CopyCollidersToRig, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086F640, void, Project, app::MovingPlatformController* this_ptr, app::Transform* on_rig, app::Transform* proj, bool instant)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetBottonColliderToTrigger, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetBottonColliderToNotTrigger, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086FB00, void, FixedUpdate, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00870100, void, ctor, app::MovingPlatformController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00870410, bool, _FillUpData_b__32_0, app::MovingPlatformController* this_ptr, app::Collider* c)
} // namespace app::classes::MovingPlatformController
