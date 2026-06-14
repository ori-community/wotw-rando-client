#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ProxyElement.h>
#include <Modloader/app/structs/ProxyElement_AutoDetectValues__Enum.h>
#include <Modloader/app/structs/ProxyElement_BypassOnLocalValues__Enum.h>
#include <Modloader/app/structs/ProxyElement_UseSystemDefaultValues__Enum.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Net::Configuration::ProxyElement {
    IL2CPP_REGISTER_METHOD(0x02019FE0, void, ctor, app::ProxyElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201A010, app::ProxyElement_AutoDetectValues__Enum, get_AutoDetect, app::ProxyElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201A040, void, set_AutoDetect, app::ProxyElement* this_ptr, app::ProxyElement_AutoDetectValues__Enum value)
    IL2CPP_REGISTER_METHOD(0x0201A070, app::ProxyElement_BypassOnLocalValues__Enum, get_BypassOnLocal, app::ProxyElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201A0A0, void, set_BypassOnLocal, app::ProxyElement* this_ptr, app::ProxyElement_BypassOnLocalValues__Enum value)
    IL2CPP_REGISTER_METHOD(0x0201A0D0, app::ConfigurationPropertyCollection*, get_Properties, app::ProxyElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201A100, app::Uri*, get_ProxyAddress, app::ProxyElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201A130, void, set_ProxyAddress, app::ProxyElement* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x0201A160, app::Uri*, get_ScriptLocation, app::ProxyElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201A190, void, set_ScriptLocation, app::ProxyElement* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x0201A1C0, app::ProxyElement_UseSystemDefaultValues__Enum, get_UseSystemDefault, app::ProxyElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201A1F0, void, set_UseSystemDefault, app::ProxyElement* this_ptr, app::ProxyElement_UseSystemDefaultValues__Enum value)
} // namespace app::classes::System::Net::Configuration::ProxyElement
