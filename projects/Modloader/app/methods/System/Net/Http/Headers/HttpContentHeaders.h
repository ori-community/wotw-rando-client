#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpContentHeaders.h>
#include <Modloader/app/structs/HttpContent.h>

namespace app::classes::System::Net::Http::Headers::HttpContentHeaders {
    IL2CPP_REGISTER_METHOD(0x02D08320, void, ctor, (app::HttpContentHeaders * this_ptr, app::HttpContent* content))
}
