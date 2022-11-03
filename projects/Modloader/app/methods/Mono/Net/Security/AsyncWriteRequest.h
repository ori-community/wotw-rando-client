#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Net::Security::AsyncWriteRequest {
    IL2CPP_REGISTER_METHOD(0x0217C520, void, ctor, (app::AsyncWriteRequest * this_ptr, app::MobileAuthenticatedStream* parent, bool sync, app::Byte__Array* buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0217C5C0, app::AsyncOperationStatus__Enum, Run, (app::AsyncWriteRequest * this_ptr, app::AsyncOperationStatus__Enum status))
} // namespace app::classes::Mono::Net::Security::AsyncWriteRequest
