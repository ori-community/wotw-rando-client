#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_String_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Action_2_String_String_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_2_String_String_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, app::Action_2_String_String_* this_ptr, app::String* arg1, app::String* arg2)
} // namespace app::classes::System::Action_2_String_String_
