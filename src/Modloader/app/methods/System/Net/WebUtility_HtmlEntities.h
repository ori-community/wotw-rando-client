#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::WebUtility_HtmlEntities {
    IL2CPP_REGISTER_METHOD(0x021BB0F0, char16_t, Lookup, app::String* entity)
    IL2CPP_REGISTER_METHOD(0x021BB360, int64_t, CalculateKeyValue, app::String* s)
    IL2CPP_REGISTER_METHOD(0x021BB3F0, void, cctor, )
} // namespace app::classes::System::Net::WebUtility_HtmlEntities
