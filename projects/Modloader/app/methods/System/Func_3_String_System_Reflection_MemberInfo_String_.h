#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_3_String_System_Reflection_MemberInfo_String_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Func_3_String_System_Reflection_MemberInfo_String_ {
    IL2CPP_REGISTER_METHOD(
        0x01D117F0,
        app::String*,
        Invoke,
        app::Func_3_String_System_Reflection_MemberInfo_String_* this_ptr,
        app::String* arg1,
        app::MemberInfo_1* arg2
    )
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_3_String_System_Reflection_MemberInfo_String_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Func_3_String_System_Reflection_MemberInfo_String_
