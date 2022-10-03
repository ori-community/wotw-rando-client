#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::ProxyScriptChain {
    IL2CPP_REGISTER_METHOD(0x01BCE180, void, ctor, (app::ProxyScriptChain * this_ptr, app::WebProxy* proxy, app::Uri* destination))
    IL2CPP_REGISTER_METHOD(0x01BCE1B0, bool, GetNextProxy, (app::ProxyScriptChain * this_ptr, app::Uri** proxy))
    IL2CPP_REGISTER_METHOD(0x01BCE3F0, void, Abort, (app::ProxyScriptChain * this_ptr))
} // namespace app::classes::System::Net::ProxyScriptChain
