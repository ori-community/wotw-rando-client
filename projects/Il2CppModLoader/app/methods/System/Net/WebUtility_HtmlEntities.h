#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::WebUtility_HtmlEntities {
    IL2CPP_REGISTER_METHOD(0x021BB0F0, uint16_t, Lookup, (app::String * entity))
    IL2CPP_REGISTER_METHOD(0x021BB360, int64_t, CalculateKeyValue, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x021BB3F0, void, cctor, ())
}
