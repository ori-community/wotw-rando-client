#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_Trigger_.h>
#include <Modloader/app/structs/Trigger_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_Trigger_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_Trigger_ * this_ptr, app::Trigger_1* obj))
    IL2CPP_REGISTER_METHODINFO(0x04799350, Action_1_Trigger__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Trigger_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047091C8, Action_1_Trigger___ctor__MethodInfo)
} // namespace app::classes::System::Action_1_Trigger_
