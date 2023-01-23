#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_LimitedLifetime_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/LimitedLifetime.h>

namespace app::classes::System::Action_1_LimitedLifetime_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_LimitedLifetime_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04711210, Action_1_LimitedLifetime___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_LimitedLifetime_ * this_ptr, app::LimitedLifetime* obj))
    IL2CPP_REGISTER_METHODINFO(0x04784910, Action_1_LimitedLifetime__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_LimitedLifetime_
