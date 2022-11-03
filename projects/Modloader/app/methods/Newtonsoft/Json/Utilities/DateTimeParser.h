#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Utilities::DateTimeParser {
    IL2CPP_REGISTER_METHOD(0x01C07B20, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x001C2460, bool, Parse, (app::DateTimeParser__Boxed * this_ptr, app::Char__Array* text, int32_t start_index, int32_t length))
    IL2CPP_REGISTER_METHOD(0x001C2470, bool, ParseDate, (app::DateTimeParser__Boxed * this_ptr, int32_t start))
    IL2CPP_REGISTER_METHOD(0x001C2480, bool, ParseTimeAndZoneAndWhitespace, (app::DateTimeParser__Boxed * this_ptr, int32_t start))
    IL2CPP_REGISTER_METHOD(0x001C24C0, bool, ParseTime, (app::DateTimeParser__Boxed * this_ptr, int32_t* start))
    IL2CPP_REGISTER_METHOD(0x001C24D0, bool, ParseZone, (app::DateTimeParser__Boxed * this_ptr, int32_t start))
    IL2CPP_REGISTER_METHOD(0x001C24E0, bool, Parse4Digit, (app::DateTimeParser__Boxed * this_ptr, int32_t start, int32_t* num))
    IL2CPP_REGISTER_METHOD(0x001C24F0, bool, Parse2Digit, (app::DateTimeParser__Boxed * this_ptr, int32_t start, int32_t* num))
    IL2CPP_REGISTER_METHOD(0x001C2500, bool, ParseChar, (app::DateTimeParser__Boxed * this_ptr, int32_t start, uint16_t ch))
} // namespace app::classes::Newtonsoft::Json::Utilities::DateTimeParser
