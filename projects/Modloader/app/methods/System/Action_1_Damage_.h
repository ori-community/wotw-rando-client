#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_Damage_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_Damage_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::Action_1_Damage_* this_ptr, app::Damage* obj)
} // namespace app::classes::System::Action_1_Damage_
