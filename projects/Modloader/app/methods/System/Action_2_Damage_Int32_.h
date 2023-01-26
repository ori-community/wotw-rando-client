#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Damage_Int32_.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_Damage_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Damage_Int32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (app::Action_2_Damage_Int32_ * this_ptr, app::Damage* arg1, int32_t arg2))
} // namespace app::classes::System::Action_2_Damage_Int32_
