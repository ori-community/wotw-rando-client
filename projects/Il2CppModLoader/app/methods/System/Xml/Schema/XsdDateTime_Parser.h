#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XsdDateTime_Parser {
    IL2CPP_REGISTER_METHOD(0x001C6160, bool, Parse, (app::XsdDateTime_Parser__Boxed * this_ptr, app::String * text, app::XsdDateTimeFlags__Enum kinds))
    IL2CPP_REGISTER_METHOD(0x001C6170, bool, ParseDate, (app::XsdDateTime_Parser__Boxed * this_ptr, int32_t start))
    IL2CPP_REGISTER_METHOD(0x001C6180, bool, ParseTimeAndZoneAndWhitespace, (app::XsdDateTime_Parser__Boxed * this_ptr, int32_t start))
    IL2CPP_REGISTER_METHOD(0x001C61C0, bool, ParseTimeAndWhitespace, (app::XsdDateTime_Parser__Boxed * this_ptr, int32_t start))
    IL2CPP_REGISTER_METHOD(0x001C6200, bool, ParseTime, (app::XsdDateTime_Parser__Boxed * this_ptr, int32_t * start))
    IL2CPP_REGISTER_METHOD(0x001C6210, bool, ParseZoneAndWhitespace, (app::XsdDateTime_Parser__Boxed * this_ptr, int32_t start))
    IL2CPP_REGISTER_METHOD(0x001C6220, bool, Parse4Dig, (app::XsdDateTime_Parser__Boxed * this_ptr, int32_t start, int32_t * num))
    IL2CPP_REGISTER_METHOD(0x001C6230, bool, Parse2Dig, (app::XsdDateTime_Parser__Boxed * this_ptr, int32_t start, int32_t * num))
    IL2CPP_REGISTER_METHOD(0x001C6240, bool, ParseChar, (app::XsdDateTime_Parser__Boxed * this_ptr, int32_t start, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x00CD0C30, bool, Test, (app::XsdDateTimeFlags__Enum left, app::XsdDateTimeFlags__Enum right))
    IL2CPP_REGISTER_METHOD(0x01C80CE0, void, cctor, ())
}
