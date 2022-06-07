#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::CallbackIdentities {
    IL2CPP_REGISTER_METHOD(0x015FA810, int32_t, GetCallbackIdentity, (app::Type * callback_struct))
    IL2CPP_REGISTER_METHODINFO(0x04777170, CallbackIdentities_GetCallbackIdentity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CallbackIdentities * this_ptr))
}
