#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpRequestHeaders.h>

namespace app::classes::System::Net::Http::Headers::HttpRequestHeaders {
    IL2CPP_REGISTER_METHOD(0x02D0D970, void, ctor, app::HttpRequestHeaders* this_ptr)
}
