#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Net::Security::AsyncHandshakeRequest {
    IL2CPP_REGISTER_METHOD(0x0217AC90, void, ctor, (app::AsyncHandshakeRequest * this_ptr, app::MobileAuthenticatedStream * parent, bool sync))
    IL2CPP_REGISTER_METHOD(0x0217ACA0, app::AsyncOperationStatus__Enum, Run, (app::AsyncHandshakeRequest * this_ptr, app::AsyncOperationStatus__Enum status))
}
