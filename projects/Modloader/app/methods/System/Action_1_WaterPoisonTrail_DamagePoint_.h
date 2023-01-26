#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_WaterPoisonTrail_DamagePoint_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint.h>

namespace app::classes::System::Action_1_WaterPoisonTrail_DamagePoint_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x029FCB60, void, Invoke, (app::Action_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::WaterPoisonTrail_DamagePoint obj))
    IL2CPP_REGISTER_METHOD(0x02C0DC40, app::IAsyncResult*, BeginInvoke, (app::Action_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::WaterPoisonTrail_DamagePoint obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_WaterPoisonTrail_DamagePoint_
