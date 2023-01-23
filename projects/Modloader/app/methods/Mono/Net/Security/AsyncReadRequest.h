#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AsyncReadRequest.h>
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/AsyncOperationStatus__Enum.h>

namespace app::classes::Mono::Net::Security::AsyncReadRequest {
    IL2CPP_REGISTER_METHOD(0x0217C520, void, ctor, (app::AsyncReadRequest * this_ptr, app::MobileAuthenticatedStream* parent, bool sync, app::Byte__Array* buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0217C530, app::AsyncOperationStatus__Enum, Run, (app::AsyncReadRequest * this_ptr, app::AsyncOperationStatus__Enum status))
} // namespace app::classes::Mono::Net::Security::AsyncReadRequest
