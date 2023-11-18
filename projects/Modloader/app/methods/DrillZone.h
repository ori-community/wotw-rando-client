#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DrillZone.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SeinDrill.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DrillZone {
    IL2CPP_REGISTER_METHOD(0x00BDBE30, app::Collider*, get_GetCollider, (app::DrillZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDBF00, void, Awake, (app::DrillZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDC150, void, OnDestroy, (app::DrillZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDC210, void, Update, (app::DrillZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDC2C0, void, StartDrill, (app::DrillZone * this_ptr, app::GameObject* entity, app::SeinDrill* drill_ability))
    IL2CPP_REGISTER_METHOD(0x00BDC6E0, void, StopDrill, (app::DrillZone * this_ptr, app::GameObject* entity, app::SeinDrill* drill_ability))
    IL2CPP_REGISTER_METHOD(0x00BDC9B0, void, StartIgnoringColliders, (app::DrillZone * this_ptr, app::GameObject* entity))
    IL2CPP_REGISTER_METHOD(0x00BDCB10, void, StopIgnoringColliders, (app::DrillZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDCCA0, bool, IsDrilled, (app::DrillZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDCCC0, bool, HasDrillAbility, (app::DrillZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsCircleOverlapping, (app::DrillZone * this_ptr, app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReleaseEvent, (app::DrillZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDCD80, void, ctor, (app::DrillZone * this_ptr))
} // namespace app::classes::DrillZone
