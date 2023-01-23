#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_EntityTargetting_.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_EntityTargetting_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_EntityTargetting_ * this_ptr, app::EntityTargetting* obj))
    IL2CPP_REGISTER_METHODINFO(0x04728CA0, Action_1_EntityTargetting__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_EntityTargetting_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0477B138, Action_1_EntityTargetting___ctor__MethodInfo)
} // namespace app::classes::System::Action_1_EntityTargetting_
