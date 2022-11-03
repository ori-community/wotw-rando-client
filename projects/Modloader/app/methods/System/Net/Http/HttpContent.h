#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Http::HttpContent {
    IL2CPP_REGISTER_METHOD(0x02D1B3D0, app::HttpContentHeaders*, get_Headers, (app::HttpContent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4270, void, Dispose_1, (app::HttpContent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D1B5B0, void, Dispose_2, (app::HttpContent * this_ptr, bool disposing))
} // namespace app::classes::System::Net::Http::HttpContent
