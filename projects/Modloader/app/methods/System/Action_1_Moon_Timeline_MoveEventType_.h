#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_Moon_Timeline_MoveEventType_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>

namespace app::classes::System::Action_1_Moon_Timeline_MoveEventType_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_Timeline_MoveEventType_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047922D0, Action_1_Moon_Timeline_MoveEventType___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::Action_1_Moon_Timeline_MoveEventType_ * this_ptr, app::MoveEventType__Enum obj))
    IL2CPP_REGISTER_METHODINFO(0x047539D8, Action_1_Moon_Timeline_MoveEventType__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_Moon_Timeline_MoveEventType_
