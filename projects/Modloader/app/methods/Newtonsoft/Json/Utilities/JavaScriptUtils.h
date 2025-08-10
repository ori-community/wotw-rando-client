#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/IArrayPool_1_System_Char_.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/Nullable_1_Int64_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringEscapeHandling__Enum.h>
#include <Modloader/app/structs/TextWriter.h>

namespace app::classes::Newtonsoft::Json::Utilities::JavaScriptUtils {
    IL2CPP_REGISTER_METHOD(0x0301B750, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0301C5B0, app::Boolean__Array*, GetCharEscapeFlags, app::StringEscapeHandling__Enum string_escape_handling, char16_t quote_char)
    IL2CPP_REGISTER_METHOD(0x0301C6E0, bool, ShouldEscapeJavaScriptString, app::String* s, app::Boolean__Array* char_escape_flags)
    IL2CPP_REGISTER_METHOD(
        0x0301C770,
        void,
        WriteEscapedJavaScriptString,
        app::TextWriter* writer,
        app::String* s,
        char16_t delimiter,
        bool append_delimiters,
        app::Boolean__Array* char_escape_flags,
        app::StringEscapeHandling__Enum string_escape_handling,
        app::IArrayPool_1_System_Char_* buffer_pool,
        app::Char__Array** write_buffer
    )
    IL2CPP_REGISTER_METHOD(
        0x0301CDE0,
        app::String*,
        ToEscapedJavaScriptString,
        app::String* value,
        char16_t delimiter,
        bool append_delimiters,
        app::StringEscapeHandling__Enum string_escape_handling
    )
    IL2CPP_REGISTER_METHOD(
        0x0301CFE0,
        int32_t,
        FirstCharToEscape,
        app::String* s,
        app::Boolean__Array* char_escape_flags,
        app::StringEscapeHandling__Enum string_escape_handling
    )
    IL2CPP_REGISTER_METHOD(0x0301D0B0, bool, TryGetDateFromConstructorJson, app::JsonReader* reader, app::DateTime* date_time, app::String** error_message)
    IL2CPP_REGISTER_METHOD(0x0301D850, bool, TryGetDateConstructorValue, app::JsonReader* reader, app::Nullable_1_Int64_* integer, app::String** error_message)
} // namespace app::classes::Newtonsoft::Json::Utilities::JavaScriptUtils
