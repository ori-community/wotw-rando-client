#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_.h>
#include <Modloader/app/structs/Func_4_System_Reflection_Assembly_String_Boolean_Type_.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::TypeNameParser {
    IL2CPP_REGISTER_METHOD(
        0x027C15B0,
        app::Type*,
        GetType,
        app::String* type_name,
        app::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_* assembly_resolver,
        app::Func_4_System_Reflection_Assembly_String_Boolean_Type_* type_resolver,
        bool throw_on_error,
        bool ignore_case,
        app::StackCrawlMark__Enum* stack_mark
    )
}
