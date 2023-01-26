#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpRequestException.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::HttpRequestException {
    IL2CPP_REGISTER_METHOD(0x02D1C400, void, ctor_1, (app::HttpRequestException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D1C4A0, void, ctor_2, (app::HttpRequestException * this_ptr, app::String* message))
} // namespace app::classes::System::Net::Http::HttpRequestException
