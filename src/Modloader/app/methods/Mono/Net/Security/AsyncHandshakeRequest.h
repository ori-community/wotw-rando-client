#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncHandshakeRequest.h>
#include <Modloader/app/structs/AsyncOperationStatus__Enum.h>
#include <Modloader/app/structs/MobileAuthenticatedStream.h>

namespace app::classes::Mono::Net::Security::AsyncHandshakeRequest {
    IL2CPP_REGISTER_METHOD(0x0217AC90, void, ctor, app::AsyncHandshakeRequest* this_ptr, app::MobileAuthenticatedStream* parent, bool sync)
    IL2CPP_REGISTER_METHOD(0x0217ACA0, app::AsyncOperationStatus__Enum, Run, app::AsyncHandshakeRequest* this_ptr, app::AsyncOperationStatus__Enum status)
} // namespace app::classes::Mono::Net::Security::AsyncHandshakeRequest
