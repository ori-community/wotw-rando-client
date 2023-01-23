#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_LegacyTrigger_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/LegacyTrigger.h>

namespace app::classes::System::Action_1_LegacyTrigger_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_LegacyTrigger_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04789818, Action_1_LegacyTrigger___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_LegacyTrigger_ * this_ptr, app::LegacyTrigger* obj))
    IL2CPP_REGISTER_METHODINFO(0x04764E08, Action_1_LegacyTrigger__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_LegacyTrigger_
