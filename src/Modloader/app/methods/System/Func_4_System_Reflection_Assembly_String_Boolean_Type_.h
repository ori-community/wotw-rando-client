#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Func_4_System_Reflection_Assembly_String_Boolean_Type_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Func_4_System_Reflection_Assembly_String_Boolean_Type_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_4_System_Reflection_Assembly_String_Boolean_Type_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02FA84B0,
        app::Type*,
        Invoke,
        app::Func_4_System_Reflection_Assembly_String_Boolean_Type_* this_ptr,
        app::Assembly* arg1,
        app::String* arg2,
        bool arg3
    )
} // namespace app::classes::System::Func_4_System_Reflection_Assembly_String_Boolean_Type_
