#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Func_1_String_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_1_String_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01938310, app::String*, Invoke, app::Func_1_String_* this_ptr)
} // namespace app::classes::System::Func_1_String_
