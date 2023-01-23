#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WebProxyData.h>
#include <Modloader/app/structs/WebProxyDataBuilder.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/FormatException.h>
#include <Modloader/app/structs/ArrayList.h>

namespace app::classes::System::Net::WebProxyDataBuilder {
    IL2CPP_REGISTER_METHOD(0x021B1D30, app::WebProxyData*, Build, (app::WebProxyDataBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021B1E90, void, SetProxyAndBypassList, (app::WebProxyDataBuilder * this_ptr, app::String* address_string, app::String* bypass_list_string))
    IL2CPP_REGISTER_METHOD(0x021B2070, void, SetAutoProxyUrl, (app::WebProxyDataBuilder * this_ptr, app::String* auto_config_url))
    IL2CPP_REGISTER_METHOD(0x021B2160, void, SetAutoDetectSettings, (app::WebProxyDataBuilder * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x021B2180, app::Uri*, ParseProxyUri, (app::String * proxy_string))
    IL2CPP_REGISTER_METHODINFO(0x04731800, WebProxyDataBuilder_ParseProxyUri__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B2360, app::Hashtable*, ParseProtocolProxies, (app::String * proxy_list_string))
    IL2CPP_REGISTER_METHODINFO(0x0474D2E8, WebProxyDataBuilder_ParseProtocolProxies__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B2890, app::FormatException*, CreateInvalidProxyStringException, (app::String * original_proxy_string))
    IL2CPP_REGISTER_METHOD(0x021B2A90, app::String*, BypassStringEscape, (app::String * raw_string))
    IL2CPP_REGISTER_METHOD(0x021B2FE0, app::String*, ConvertRegexReservedChars, (app::String * raw_string))
    IL2CPP_REGISTER_METHOD(0x021B3210, app::ArrayList*, ParseBypassList, (app::String * bypass_list_string, bool* bypass_on_local))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WebProxyDataBuilder * this_ptr))
} // namespace app::classes::System::Net::WebProxyDataBuilder
