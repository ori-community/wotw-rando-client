#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_Object_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Func_2_Object_String_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_String_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::String*, Invoke, (app::Func_2_Object_String_ * this_ptr, app::Object* arg))
} // namespace app::classes::System::Func_2_Object_String_
