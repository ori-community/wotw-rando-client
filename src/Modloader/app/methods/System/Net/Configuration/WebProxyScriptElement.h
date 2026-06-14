#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/WebProxyScriptElement.h>

namespace app::classes::System::Net::Configuration::WebProxyScriptElement {
    IL2CPP_REGISTER_METHOD(0x01E994D0, void, ctor, app::WebProxyScriptElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99500, app::TimeSpan, get_DownloadTimeout, app::WebProxyScriptElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99530, void, set_DownloadTimeout, app::WebProxyScriptElement* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01E99560, app::ConfigurationPropertyCollection*, get_Properties, app::WebProxyScriptElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99590, void, PostDeserialize, app::WebProxyScriptElement* this_ptr)
} // namespace app::classes::System::Net::Configuration::WebProxyScriptElement
