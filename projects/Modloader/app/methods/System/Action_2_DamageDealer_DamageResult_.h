#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_2_DamageDealer_DamageResult_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::System::Action_2_DamageDealer_DamageResult_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_DamageDealer_DamageResult_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476B800, Action_2_DamageDealer_DamageResult___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C10CF0, void, Invoke, (app::Action_2_DamageDealer_DamageResult_ * this_ptr, app::DamageDealer* arg1, app::DamageResult arg2))
    IL2CPP_REGISTER_METHODINFO(0x04773E20, Action_2_DamageDealer_DamageResult__Invoke__MethodInfo)
} // namespace app::classes::System::Action_2_DamageDealer_DamageResult_
