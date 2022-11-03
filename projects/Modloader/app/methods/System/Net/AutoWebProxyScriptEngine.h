#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::AutoWebProxyScriptEngine {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AutoWebProxyScriptEngine * this_ptr, app::WebProxy* proxy, bool use_registry))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Uri*, get_AutomaticConfigurationScript, (app::AutoWebProxyScriptEngine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_AutomaticConfigurationScript, (app::AutoWebProxyScriptEngine * this_ptr, app::Uri* value))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_AutomaticallyDetectSettings, (app::AutoWebProxyScriptEngine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_AutomaticallyDetectSettings, (app::AutoWebProxyScriptEngine * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02010EF0, bool, GetProxies_1, (app::AutoWebProxyScriptEngine * this_ptr, app::Uri* destination, app::IList_1_System_String_** proxy_list))
    IL2CPP_REGISTER_METHOD(0x02010EF0, bool, GetProxies_2, (app::AutoWebProxyScriptEngine * this_ptr, app::Uri* destination, app::IList_1_System_String_** proxy_list, int32_t* sync_status))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Close, (app::AutoWebProxyScriptEngine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Abort, (app::AutoWebProxyScriptEngine * this_ptr, int32_t* sync_status))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckForChanges, (app::AutoWebProxyScriptEngine * this_ptr))
} // namespace app::classes::System::Net::AutoWebProxyScriptEngine
