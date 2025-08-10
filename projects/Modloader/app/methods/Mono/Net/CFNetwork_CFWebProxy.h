#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CFNetwork_CFWebProxy.h>
#include <Modloader/app/structs/CFProxy.h>
#include <Modloader/app/structs/CFProxy__Array.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/NetworkCredential.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::Mono::Net::CFNetwork_CFWebProxy {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CFNetwork_CFWebProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ICredentials*, get_Credentials, app::CFNetwork_CFWebProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA6CF0, void, set_Credentials, app::CFNetwork_CFWebProxy* this_ptr, app::ICredentials* value)
    IL2CPP_REGISTER_METHOD(0x02176D30, app::Uri*, GetProxyUri, app::CFProxy* proxy, app::NetworkCredential** credentials)
    IL2CPP_REGISTER_METHOD(0x02177340, app::Uri*, GetProxyUriFromScript, void* script, app::Uri* target_uri, app::NetworkCredential** credentials)
    IL2CPP_REGISTER_METHOD(
        0x02177540,
        app::Uri*,
        ExecuteProxyAutoConfigurationURL,
        void* proxy_auto_config_u_r_l,
        app::Uri* target_uri,
        app::NetworkCredential** credentials
    )
    IL2CPP_REGISTER_METHOD(0x02177610, app::Uri*, SelectProxy, app::CFProxy__Array* proxies, app::Uri* target_uri, app::NetworkCredential** credentials)
    IL2CPP_REGISTER_METHOD(0x02177700, app::Uri*, GetProxy, app::CFNetwork_CFWebProxy* this_ptr, app::Uri* target_uri)
    IL2CPP_REGISTER_METHOD(0x02177AE0, bool, IsBypassed, app::CFNetwork_CFWebProxy* this_ptr, app::Uri* target_uri)
} // namespace app::classes::Mono::Net::CFNetwork_CFWebProxy
