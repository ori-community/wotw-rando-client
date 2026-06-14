#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/ReadOnlySpan_1_Char_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Globalization::FormatProvider {
    IL2CPP_REGISTER_METHOD(
        0x030F4FA0,
        app::String*,
        FormatBigInteger,
        int32_t precision,
        int32_t scale,
        bool sign,
        app::String* format,
        app::NumberFormatInfo* number_format_info,
        app::Char__Array* digits,
        int32_t start_index
    )
    IL2CPP_REGISTER_METHOD(
        0x030F5200,
        bool,
        TryStringToBigInteger,
        app::ReadOnlySpan_1_Char_ s,
        app::NumberStyles__Enum styles,
        app::NumberFormatInfo* number_format_info,
        app::StringBuilder* receiver,
        int32_t* precision,
        int32_t* scale,
        bool* sign
    )
} // namespace app::classes::System::Globalization::FormatProvider
