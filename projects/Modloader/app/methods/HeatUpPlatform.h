#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HeatUpPlatform.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/HeatUpPlatform_State__Enum.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::HeatUpPlatform {
    IL2CPP_REGISTER_METHOD(0x010A2630, void, Awake, (app::HeatUpPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A26A0, void, Start, (app::HeatUpPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A26B0, void, OnCollisionEnter, (app::HeatUpPlatform * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x010A26B0, void, OnCollisionStay, (app::HeatUpPlatform * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x010A26C0, void, OnCollision, (app::HeatUpPlatform * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x010A2B30, void, FixedUpdate, (app::HeatUpPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A2B50, void, Trigger, (app::HeatUpPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A2B60, void, ChangeState, (app::HeatUpPlatform * this_ptr, app::HeatUpPlatform_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x010A2B70, void, UpdateState, (app::HeatUpPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A2F60, void, UpdateMaterial, (app::HeatUpPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A3140, void, Serialize, (app::HeatUpPlatform * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005A4CC0, void, ctor, (app::HeatUpPlatform * this_ptr))
} // namespace app::classes::HeatUpPlatform
