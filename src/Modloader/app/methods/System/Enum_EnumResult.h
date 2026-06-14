#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enum_EnumResult__Boxed.h>
#include <Modloader/app/structs/Enum_ParseFailureKind__Enum.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Enum_EnumResult {
    IL2CPP_REGISTER_METHOD(0x001557F0, void, Init, app::Enum_EnumResult__Boxed* this_ptr, bool can_method_throw)
    IL2CPP_REGISTER_METHOD(0x00155800, void, SetFailure_1, app::Enum_EnumResult__Boxed* this_ptr, app::Exception* unhandled_exception)
    IL2CPP_REGISTER_METHOD(
        0x00155810,
        void,
        SetFailure_2,
        app::Enum_EnumResult__Boxed* this_ptr,
        app::Enum_ParseFailureKind__Enum failure,
        app::String* failure_parameter
    )
    IL2CPP_REGISTER_METHOD(
        0x00155820,
        void,
        SetFailure_3,
        app::Enum_EnumResult__Boxed* this_ptr,
        app::Enum_ParseFailureKind__Enum failure,
        app::String* failure_message_i_d,
        app::Object* failure_message_format_argument
    )
    IL2CPP_REGISTER_METHOD(0x00155830, app::Exception*, GetEnumParseException, app::Enum_EnumResult__Boxed* this_ptr)
} // namespace app::classes::System::Enum_EnumResult
