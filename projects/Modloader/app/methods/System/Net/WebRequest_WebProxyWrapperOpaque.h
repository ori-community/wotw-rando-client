#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::WebRequest_WebProxyWrapperOpaque {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::WebRequest_WebProxyWrapperOpaque * this_ptr, app::WebProxy* web_proxy))
    IL2CPP_REGISTER_METHOD(0x021B80F0, app::Uri*, GetProxy, (app::WebRequest_WebProxyWrapperOpaque * this_ptr, app::Uri* destination))
    IL2CPP_REGISTER_METHOD(0x021B8110, bool, IsBypassed, (app::WebRequest_WebProxyWrapperOpaque * this_ptr, app::Uri* host))
    IL2CPP_REGISTER_METHOD(0x01A88520, app::ICredentials*, get_Credentials, (app::WebRequest_WebProxyWrapperOpaque * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021B8260, void, set_Credentials, (app::WebRequest_WebProxyWrapperOpaque * this_ptr, app::ICredentials* value))
    IL2CPP_REGISTER_METHOD(0x021B8280, app::ProxyChain*, GetProxies, (app::WebRequest_WebProxyWrapperOpaque * this_ptr, app::Uri* destination))
} // namespace app::classes::System::Net::WebRequest_WebProxyWrapperOpaque
