#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalDefinition.h>
#include <Modloader/app/structs/Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_.h>
#include <Modloader/app/structs/Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ {
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0010A980,
        app::LocalDefinition,
        GetValueOrDefault_1,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00120520,
        void,
        ctor,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr,
        app::LocalDefinition value
    )
    IL2CPP_REGISTER_METHOD(0x0020ECA0, app::LocalDefinition, get_Value, app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0020ED90,
        bool,
        Equals_1,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr,
        app::Object* other
    )
    IL2CPP_REGISTER_METHOD(
        0x0020EDE0,
        bool,
        Equals_2,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ other
    )
    IL2CPP_REGISTER_METHOD(0x0020EED0, int32_t, GetHashCode, app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F49C0,
        app::LocalDefinition,
        GetValueOrDefault_2,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr,
        app::LocalDefinition default_value
    )
    IL2CPP_REGISTER_METHOD(0x0020EF40, app::String*, ToString, app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0254E8A0, app::Object*, Box, app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ o)
    IL2CPP_REGISTER_METHOD(0x0254E930, app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_
