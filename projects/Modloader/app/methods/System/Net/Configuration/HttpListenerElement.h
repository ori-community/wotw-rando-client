#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/HttpListenerElement.h>
#include <Modloader/app/structs/HttpListenerTimeoutsElement.h>

namespace app::classes::System::Net::Configuration::HttpListenerElement {
    IL2CPP_REGISTER_METHOD(0x02019740, void, ctor, app::HttpListenerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019770, app::ConfigurationPropertyCollection*, get_Properties, app::HttpListenerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020197A0, app::HttpListenerTimeoutsElement*, get_Timeouts, app::HttpListenerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020197D0, bool, get_UnescapeRequestUrl, app::HttpListenerElement* this_ptr)
} // namespace app::classes::System::Net::Configuration::HttpListenerElement
