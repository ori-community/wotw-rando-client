#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XRegistrationToken.h>
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/XTaskQueueRegistrationToken.h>

namespace app::classes::XGamingRuntime::XRegistrationToken {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::XRegistrationToken * this_ptr, app::GCHandle callback_handle, app::XTaskQueueRegistrationToken token))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::GCHandle, get_CallbackHandle, (app::XRegistrationToken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XTaskQueueRegistrationToken, get_Token, (app::XRegistrationToken * this_ptr))
} // namespace app::classes::XGamingRuntime::XRegistrationToken
