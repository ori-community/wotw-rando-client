#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_String_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Action_2_String_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, app::Action_2_String_Int32_* this_ptr, app::String* arg1, int32_t arg2)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_2_String_Int32_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Action_2_String_Int32_
