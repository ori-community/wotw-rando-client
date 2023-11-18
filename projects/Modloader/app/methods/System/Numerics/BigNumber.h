#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/ArgumentException.h>
#include <Modloader/app/structs/BigInteger_2.h>
#include <Modloader/app/structs/BigNumber_BigNumberBuffer.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/ReadOnlySpan_1_Char_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Numerics::BigNumber {
    IL2CPP_REGISTER_METHOD(0x030FFC60, bool, TryValidateParseStyleInteger, (app::NumberStyles__Enum style, app::ArgumentException** e))
    IL2CPP_REGISTER_METHOD(0x030FFFA0, bool, TryParseBigInteger, (app::ReadOnlySpan_1_Char_ value, app::NumberStyles__Enum style, app::NumberFormatInfo* info, app::BigInteger_2* result))
    IL2CPP_REGISTER_METHOD(0x031002E0, app::BigInteger_2, ParseBigInteger_1, (app::String * value, app::NumberStyles__Enum style, app::NumberFormatInfo* info))
    IL2CPP_REGISTER_METHOD(0x03100550, app::ReadOnlySpan_1_Char_, AsReadOnlySpan, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x03100610, app::BigInteger_2, ParseBigInteger_2, (app::ReadOnlySpan_1_Char_ value, app::NumberStyles__Enum style, app::NumberFormatInfo* info))
    IL2CPP_REGISTER_METHOD(0x03100780, bool, HexNumberToBigInteger, (app::BigNumber_BigNumberBuffer * number, app::BigInteger_2* value))
    IL2CPP_REGISTER_METHOD(0x03100970, bool, NumberToBigInteger, (app::BigNumber_BigNumberBuffer * number, app::BigInteger_2* value))
    IL2CPP_REGISTER_METHOD(0x03100C20, char16_t, ParseFormatSpecifier, (app::String * format, int32_t* digits))
    IL2CPP_REGISTER_METHOD(0x03100D70, app::String*, FormatBigIntegerToHexString, (app::BigInteger_2 value, char16_t format, int32_t digits, app::NumberFormatInfo* info))
    IL2CPP_REGISTER_METHOD(0x031011A0, app::String*, FormatBigInteger, (app::BigInteger_2 value, app::String* format, app::NumberFormatInfo* info))
} // namespace app::classes::System::Numerics::BigNumber
