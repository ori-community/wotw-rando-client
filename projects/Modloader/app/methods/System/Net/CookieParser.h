#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Cookie.h>
#include <Modloader/app/structs/CookieParser.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::CookieParser {
    IL2CPP_REGISTER_METHOD(0x01EA7850, void, ctor, app::CookieParser* this_ptr, app::String* cookie_string)
    IL2CPP_REGISTER_METHOD(0x01EA79B0, app::Cookie*, Get, app::CookieParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EA8210, app::Cookie*, GetServer, app::CookieParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EA8950, app::String*, CheckQuoted, app::String* value)
} // namespace app::classes::System::Net::CookieParser
