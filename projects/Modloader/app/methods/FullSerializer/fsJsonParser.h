#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/fsResult.h>
#include <Modloader/app/structs/fsJsonParser.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/fsData.h>

namespace app::classes::FullSerializer::fsJsonParser {
    IL2CPP_REGISTER_METHOD(0x0150C4C0, app::fsResult, MakeFailure, (app::fsJsonParser * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0150C7E0, bool, TryMoveNext, (app::fsJsonParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150C810, bool, HasValue_1, (app::fsJsonParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150C840, bool, HasValue_2, (app::fsJsonParser * this_ptr, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x0150C880, uint16_t, Character_1, (app::fsJsonParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150C8B0, uint16_t, Character_2, (app::fsJsonParser * this_ptr, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x0150C8E0, void, SkipSpace, (app::fsJsonParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150CC80, bool, IsHex, (app::fsJsonParser * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x0150CCB0, uint32_t, ParseSingleChar, (app::fsJsonParser * this_ptr, uint16_t c1, uint32_t multipliyer))
    IL2CPP_REGISTER_METHOD(0x0150CCF0, uint32_t, ParseUnicode, (app::fsJsonParser * this_ptr, uint16_t c1, uint16_t c2, uint16_t c3, uint16_t c4))
    IL2CPP_REGISTER_METHOD(0x0150CE40, app::fsResult, TryUnescapeChar, (app::fsJsonParser * this_ptr, uint16_t* escaped))
    IL2CPP_REGISTER_METHOD(0x0150D6F0, app::fsResult, TryParseExact, (app::fsJsonParser * this_ptr, app::String* content))
    IL2CPP_REGISTER_METHOD(0x0150D880, app::fsResult, TryParseTrue, (app::fsJsonParser * this_ptr, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x0150DA40, app::fsResult, TryParseFalse, (app::fsJsonParser * this_ptr, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x0150DC00, app::fsResult, TryParseNull, (app::fsJsonParser * this_ptr, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x0150DDC0, bool, IsSeparator, (app::fsJsonParser * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x0150DE80, app::fsResult, TryParseNumber, (app::fsJsonParser * this_ptr, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x0150E460, app::fsResult, TryParseString, (app::fsJsonParser * this_ptr, app::String** str))
    IL2CPP_REGISTER_METHOD(0x0150E7B0, app::fsResult, TryParseArray, (app::fsJsonParser * this_ptr, app::fsData** arr))
    IL2CPP_REGISTER_METHOD(0x0150EC30, app::fsResult, TryParseObject, (app::fsJsonParser * this_ptr, app::fsData** obj))
    IL2CPP_REGISTER_METHOD(0x0150F250, app::fsResult, RunParse, (app::fsJsonParser * this_ptr, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x0150F5F0, app::fsResult, Parse_1, (app::String * input, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x0150F8E0, app::fsData*, Parse_2, (app::String * input))
    IL2CPP_REGISTER_METHOD(0x0150F9A0, void, ctor, (app::fsJsonParser * this_ptr, app::String* input))
} // namespace app::classes::FullSerializer::fsJsonParser
