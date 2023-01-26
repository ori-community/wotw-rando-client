#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::SqlTypes::SQLResource {
    IL2CPP_REGISTER_METHOD(0x01E4DF30, app::String*, get_NullString, ())
    IL2CPP_REGISTER_METHOD(0x01E4DFB0, app::String*, get_ArithOverflowMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E030, app::String*, get_DivideByZeroMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E0B0, app::String*, get_NullValueMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E130, app::String*, get_TruncationMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E1B0, app::String*, get_DateTimeOverflowMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E230, app::String*, get_ConcatDiffCollationMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E2B0, app::String*, get_CompareDiffCollationMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E330, app::String*, get_ConversionOverflowMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E3B0, app::String*, get_TimeZoneSpecifiedMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E430, app::String*, get_InvalidArraySizeMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E4B0, app::String*, get_InvalidPrecScaleMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E530, app::String*, get_FormatMessage, ())
    IL2CPP_REGISTER_METHOD(0x01E4E5B0, app::String*, InvalidOpStreamClosed, (app::String * method_1))
    IL2CPP_REGISTER_METHOD(0x01E4E640, app::String*, InvalidOpStreamNonWritable, (app::String * method_1))
    IL2CPP_REGISTER_METHOD(0x01E4E6D0, app::String*, InvalidOpStreamNonReadable, (app::String * method_1))
    IL2CPP_REGISTER_METHOD(0x01E4E760, app::String*, InvalidOpStreamNonSeekable, (app::String * method_1))
} // namespace app::classes::System::Data::SqlTypes::SQLResource
