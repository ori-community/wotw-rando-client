#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WebProxy.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/AutoWebProxyScriptEngine.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/ProxyChain.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Uri__Array.h>
#include <Modloader/app/structs/WebProxyData.h>

namespace app::classes::System::Net::WebProxy {
    IL2CPP_REGISTER_METHOD(0x01D805A0, void, ctor_1, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D80630, void, ctor_2, (app::WebProxy * this_ptr, app::Uri* address))
    IL2CPP_REGISTER_METHOD(0x01D806D0, void, ctor_3, (app::WebProxy * this_ptr, app::Uri* address, bool bypass_on_local))
    IL2CPP_REGISTER_METHOD(0x01D80780, void, ctor_4, (app::WebProxy * this_ptr, app::Uri* address, bool bypass_on_local, app::String__Array* bypass_list))
    IL2CPP_REGISTER_METHOD(0x01D807A0, void, ctor_5, (app::WebProxy * this_ptr, app::Uri* address, bool bypass_on_local, app::String__Array* bypass_list, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x01D80920, void, ctor_6, (app::WebProxy * this_ptr, app::String* host, int32_t port))
    IL2CPP_REGISTER_METHOD(0x01D80B40, void, ctor_7, (app::WebProxy * this_ptr, app::String* address))
    IL2CPP_REGISTER_METHOD(0x01D80BF0, void, ctor_8, (app::WebProxy * this_ptr, app::String* address, bool bypass_on_local))
    IL2CPP_REGISTER_METHOD(0x01D80CB0, void, ctor_9, (app::WebProxy * this_ptr, app::String* address, bool bypass_on_local, app::String__Array* bypass_list))
    IL2CPP_REGISTER_METHOD(0x01D80D10, void, ctor_10, (app::WebProxy * this_ptr, app::String* address, bool bypass_on_local, app::String__Array* bypass_list, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Uri*, get_Address, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D80D60, void, set_Address, (app::WebProxy * this_ptr, app::Uri* value))
    IL2CPP_REGISTER_METHOD(0x01D80D80, void, set_AutoDetect, (app::WebProxy * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01D80EE0, void, set_ScriptLocation, (app::WebProxy * this_ptr, app::Uri* value))
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_BypassProxyOnLocal, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D81040, void, set_BypassProxyOnLocal, (app::WebProxy * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01D81060, app::String__Array*, get_BypassList, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D81240, void, set_BypassList, (app::WebProxy * this_ptr, app::String__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::ICredentials*, get_Credentials, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Credentials, (app::WebProxy * this_ptr, app::ICredentials* value))
    IL2CPP_REGISTER_METHOD(0x01D813B0, bool, get_UseDefaultCredentials, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D81480, void, set_UseDefaultCredentials, (app::WebProxy * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01D814B0, app::ArrayList*, get_BypassArrayList, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, CheckForChanges, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D81610, app::Uri*, GetProxy, (app::WebProxy * this_ptr, app::Uri* destination))
    IL2CPP_REGISTER_METHOD(0x01D817D0, app::Uri*, CreateProxyUri, (app::String * address))
    IL2CPP_REGISTER_METHOD(0x01D81970, void, UpdateRegExList, (app::WebProxy * this_ptr, bool can_throw))
    IL2CPP_REGISTER_METHOD(0x01D81C80, bool, IsMatchInBypassList, (app::WebProxy * this_ptr, app::Uri* input))
    IL2CPP_REGISTER_METHOD(0x01D81F40, bool, IsLocal, (app::WebProxy * this_ptr, app::Uri* host))
    IL2CPP_REGISTER_METHOD(0x01D822A0, bool, IsLocalInProxyHash, (app::WebProxy * this_ptr, app::Uri* host))
    IL2CPP_REGISTER_METHOD(0x01D823F0, bool, IsBypassed, (app::WebProxy * this_ptr, app::Uri* host))
    IL2CPP_REGISTER_METHOD(0x01D82530, bool, IsBypassedManual, (app::WebProxy * this_ptr, app::Uri* host))
    IL2CPP_REGISTER_METHOD(0x01D82740, app::WebProxy*, GetDefaultProxy, ())
    IL2CPP_REGISTER_METHOD(0x01D82880, void, ctor_11, (app::WebProxy * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x00C53AA0, void, ISerializable_GetObjectData, (app::WebProxy * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01D82AE0, void, GetObjectData, (app::WebProxy * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::AutoWebProxyScriptEngine*, get_ScriptEngine, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_ScriptEngine, (app::WebProxy * this_ptr, app::AutoWebProxyScriptEngine* value))
    IL2CPP_REGISTER_METHOD(0x01D82C80, app::IWebProxy*, CreateDefaultProxy, ())
    IL2CPP_REGISTER_METHOD(0x01D82DC0, void, ctor_12, (app::WebProxy * this_ptr, bool enable_autoproxy))
    IL2CPP_REGISTER_METHOD(0x01D82DD0, void, DeleteScriptEngine, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, UnsafeUpdateFromRegistry, (app::WebProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D82DE0, void, Update, (app::WebProxy * this_ptr, app::WebProxyData* web_proxy_data))
    IL2CPP_REGISTER_METHOD(0x01D82F30, app::ProxyChain*, IAutoWebProxy_GetProxies, (app::WebProxy * this_ptr, app::Uri* destination))
    IL2CPP_REGISTER_METHOD(0x01D830E0, bool, GetProxyAuto, (app::WebProxy * this_ptr, app::Uri* destination, app::Uri** proxy_uri))
    IL2CPP_REGISTER_METHOD(0x01D83170, bool, IsBypassedAuto, (app::WebProxy * this_ptr, app::Uri* destination, bool* is_bypassed))
    IL2CPP_REGISTER_METHOD(0x01D831F0, app::Uri__Array*, GetProxiesAuto, (app::WebProxy * this_ptr, app::Uri* destination, int32_t* sync_status))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, AbortGetProxiesAuto, (app::WebProxy * this_ptr, int32_t* sync_status))
    IL2CPP_REGISTER_METHOD(0x01D83260, app::Uri*, GetProxyAutoFailover, (app::WebProxy * this_ptr, app::Uri* destination))
    IL2CPP_REGISTER_METHOD(0x01D833A0, bool, AreAllBypassed, (app::IEnumerable_1_System_String_ * proxies, bool check_first_only))
    IL2CPP_REGISTER_METHOD(0x01D83540, app::Uri*, ProxyUri, (app::String * proxy_name))
} // namespace app::classes::System::Net::WebProxy
