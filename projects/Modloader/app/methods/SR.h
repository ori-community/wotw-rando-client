#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SR {
    IL2CPP_REGISTER_METHOD(0x0228ABB0, app::String*, Format_1, app::String* resource_format, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x0228ACB0, app::String*, Format_2, app::String* resource_format, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x02492010, app::String*, GetString_1, app::String* name, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x021E0BD0, app::String*, GetString_2, app::CultureInfo* culture, app::String* name, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, GetString_3, app::String* name)
    IL2CPP_REGISTER_METHOD(0x024920D0, app::String*, Format_3, app::String* resource_format, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x024921D0, app::String*, Format_4, app::String* resource_format, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x021E0B10, app::String*, GetString_4, app::String* name, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x021E0BD0, app::String*, GetString_5, app::CultureInfo* culture, app::String* name, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, GetString_6, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F87FB0, app::String*, Format_5, app::String* resource_format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01F88080, app::String*, Format_6, app::String* resource_format, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01F88180, app::String*, Format_7, app::String* resource_format, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x01F88290, app::String*, Format_8, app::String* resource_format, app::Object* p1, app::Object* p2, app::Object* p3)
    IL2CPP_REGISTER_METHOD(0x030F4EA0, app::String*, Format_9, app::String* resource_format, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, GetString_7, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02148260, app::String*, Format_10, app::String* resource_format, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x02148360, app::String*, Format_11, app::String* resource_format, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x02148470, app::String*, Format_12, app::String* resource_format, app::Object* p1, app::Object* p2, app::Object* p3)
} // namespace app::classes::SR
