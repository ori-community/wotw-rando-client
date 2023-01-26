#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_AbilityType_Boolean_.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_AbilityType_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02C0FEA0, void, Invoke, (app::Action_2_AbilityType_Boolean_ * this_ptr, app::AbilityType__Enum arg1, bool arg2))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_AbilityType_Boolean_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Action_2_AbilityType_Boolean_
