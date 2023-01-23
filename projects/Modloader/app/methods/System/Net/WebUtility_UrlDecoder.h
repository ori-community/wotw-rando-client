#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WebUtility_UrlDecoder.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::WebUtility_UrlDecoder {
    IL2CPP_REGISTER_METHOD(0x021BB4D0, void, FlushBytes, (app::WebUtility_UrlDecoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021BB540, void, ctor, (app::WebUtility_UrlDecoder * this_ptr, int32_t buffer_size, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x021BB5E0, void, AddChar, (app::WebUtility_UrlDecoder * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x021BB690, void, AddByte, (app::WebUtility_UrlDecoder * this_ptr, uint8_t b))
    IL2CPP_REGISTER_METHOD(0x021BB760, app::String*, GetString, (app::WebUtility_UrlDecoder * this_ptr))
} // namespace app::classes::System::Net::WebUtility_UrlDecoder
