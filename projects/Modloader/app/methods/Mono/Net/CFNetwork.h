#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CFArray.h>
#include <Modloader/app/structs/CFDictionary.h>
#include <Modloader/app/structs/CFNetwork_CFProxyAutoConfigurationResultCallback.h>
#include <Modloader/app/structs/CFProxySettings.h>
#include <Modloader/app/structs/CFProxy__Array.h>
#include <Modloader/app/structs/CFStreamClientContext.h>
#include <Modloader/app/structs/CFUrl.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::Mono::Net::CFNetwork {
    IL2CPP_REGISTER_METHOD(
        0x02173E80,
        void*,
        CFNetworkCopyProxiesForAutoConfigurationScriptSequential,
        void* proxy_auto_configuration_script,
        void* target_u_r_l,
        void** error
    )
    IL2CPP_REGISTER_METHOD(
        0x02173F30,
        void*,
        CFNetworkExecuteProxyAutoConfigurationURL,
        void* proxy_auto_config_u_r_l,
        void* target_u_r_l,
        app::CFNetwork_CFProxyAutoConfigurationResultCallback* cb,
        app::CFStreamClientContext* client_context
    )
    IL2CPP_REGISTER_METHOD(0x02174000, void, CFNetworkCopyProxiesForAutoConfigurationScriptThread, )
    IL2CPP_REGISTER_METHOD(
        0x021743E0,
        void*,
        CFNetworkCopyProxiesForAutoConfigurationScript,
        void* proxy_auto_configuration_script,
        void* target_u_r_l,
        void** error
    )
    IL2CPP_REGISTER_METHOD(0x02174C70, app::CFArray*, CopyProxiesForAutoConfigurationScript, void* proxy_auto_configuration_script, app::CFUrl* target_u_r_l)
    IL2CPP_REGISTER_METHOD(
        0x02174E30,
        app::CFProxy__Array*,
        GetProxiesForAutoConfigurationScript_1,
        void* proxy_auto_configuration_script,
        app::CFUrl* target_u_r_l
    )
    IL2CPP_REGISTER_METHOD(
        0x02175220,
        app::CFProxy__Array*,
        GetProxiesForAutoConfigurationScript_2,
        void* proxy_auto_configuration_script,
        app::Uri* target_uri
    )
    IL2CPP_REGISTER_METHOD(0x02175390, app::CFProxy__Array*, ExecuteProxyAutoConfigurationURL, void* proxy_auto_config_u_r_l, app::Uri* target_u_r_l)
    IL2CPP_REGISTER_METHOD(0x021758C0, void*, CFNetworkCopyProxiesForURL, void* url, void* proxy_settings)
    IL2CPP_REGISTER_METHOD(0x02175970, app::CFArray*, CopyProxiesForURL, app::CFUrl* url, app::CFDictionary* proxy_settings)
    IL2CPP_REGISTER_METHOD(0x02175BB0, app::CFProxy__Array*, GetProxiesForURL, app::CFUrl* url, app::CFProxySettings* proxy_settings)
    IL2CPP_REGISTER_METHOD(0x02175FB0, app::CFProxy__Array*, GetProxiesForUri, app::Uri* uri, app::CFProxySettings* proxy_settings)
    IL2CPP_REGISTER_METHOD(0x021760F0, void*, CFNetworkCopySystemProxySettings, )
    IL2CPP_REGISTER_METHOD(0x02176180, app::CFProxySettings*, GetSystemProxySettings, )
    IL2CPP_REGISTER_METHOD(0x02176450, app::IWebProxy*, GetDefaultProxy, )
    IL2CPP_REGISTER_METHOD(0x02176590, void, cctor, )
} // namespace app::classes::Mono::Net::CFNetwork
