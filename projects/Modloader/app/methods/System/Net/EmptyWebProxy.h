#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::EmptyWebProxy {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmptyWebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Uri*, GetProxy, (app::EmptyWebProxy * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsBypassed, (app::EmptyWebProxy * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ICredentials*, get_Credentials, (app::EmptyWebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Credentials, (app::EmptyWebProxy * this_ptr, app::ICredentials* value))
    IL2CPP_REGISTER_METHOD(0x01EB40E0, app::ProxyChain*, IAutoWebProxy_GetProxies, (app::EmptyWebProxy * this_ptr, app::Uri* destination))
} // namespace app::classes::System::Net::EmptyWebProxy
