#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_4_System_Reflection_Assembly_String_Boolean_Type_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Func_4_System_Reflection_Assembly_String_Boolean_Type_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_4_System_Reflection_Assembly_String_Boolean_Type_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04742100, Func_4_System_Reflection_Assembly_String_Boolean_Type___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FA84B0, app::Type*, Invoke, (app::Func_4_System_Reflection_Assembly_String_Boolean_Type_ * this_ptr, app::Assembly* arg1, app::String* arg2, bool arg3))
    IL2CPP_REGISTER_METHODINFO(0x0477D5B8, Func_4_System_Reflection_Assembly_String_Boolean_Type__Invoke__MethodInfo)
} // namespace app::classes::System::Func_4_System_Reflection_Assembly_String_Boolean_Type_
