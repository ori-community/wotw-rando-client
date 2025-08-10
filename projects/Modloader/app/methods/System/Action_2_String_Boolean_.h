#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_String_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Action_2_String_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x01D19FD0, void, Invoke, app::Action_2_String_Boolean_* this_ptr, app::String* arg1, bool arg2)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_2_String_Boolean_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Action_2_String_Boolean_
