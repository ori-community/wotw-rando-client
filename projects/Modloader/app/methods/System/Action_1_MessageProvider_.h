#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_MessageProvider_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_MessageProvider_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_MessageProvider_ * this_ptr, app::MessageProvider* obj))
    IL2CPP_REGISTER_METHODINFO(0x0475D9B8, Action_1_MessageProvider__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_MessageProvider_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04760F98, Action_1_MessageProvider___ctor__MethodInfo)
} // namespace app::classes::System::Action_1_MessageProvider_
