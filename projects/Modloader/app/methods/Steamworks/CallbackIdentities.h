#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/CallbackIdentities.h>

namespace app::classes::Steamworks::CallbackIdentities {
    IL2CPP_REGISTER_METHOD(0x015FA810, int32_t, GetCallbackIdentity, (app::Type * callback_struct))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CallbackIdentities * this_ptr))
} // namespace app::classes::Steamworks::CallbackIdentities
