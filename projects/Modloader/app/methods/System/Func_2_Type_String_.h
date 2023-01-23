#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_Type_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Func_2_Type_String_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Type_String_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476BCF8, Func_2_Type_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01852930, app::String*, Invoke, (app::Func_2_Type_String_ * this_ptr, app::Type* arg))
    IL2CPP_REGISTER_METHODINFO(0x0478D900, Func_2_Type_String__Invoke__MethodInfo)
} // namespace app::classes::System::Func_2_Type_String_
