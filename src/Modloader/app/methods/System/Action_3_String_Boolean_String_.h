#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_3_String_Boolean_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Action_3_String_Boolean_String_ {
    IL2CPP_REGISTER_METHOD(0x02C15490, void, Invoke, app::Action_3_String_Boolean_String_* this_ptr, app::String* arg1, bool arg2, app::String* arg3)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_3_String_Boolean_String_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Action_3_String_Boolean_String_
