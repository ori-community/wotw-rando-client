#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID {
    IL2CPP_REGISTER_METHOD(0x020AC690, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x020AC8B0, int32_t, IndexOfKnownHeader, (app::String * header_name))
    IL2CPP_REGISTER_METHOD(0x020AC9B0, app::String*, ToString, (int32_t position))
} // namespace app::classes::System::Net::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID
