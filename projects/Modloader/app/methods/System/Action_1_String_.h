#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Action_1_String_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_String_ * this_ptr, app::String* obj))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_String_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Action_1_String_
