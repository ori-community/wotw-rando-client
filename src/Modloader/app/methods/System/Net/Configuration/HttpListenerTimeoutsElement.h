#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/HttpListenerTimeoutsElement.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Net::Configuration::HttpListenerTimeoutsElement {
    IL2CPP_REGISTER_METHOD(0x02019800, void, ctor, app::HttpListenerTimeoutsElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019830, app::TimeSpan, get_DrainEntityBody, app::HttpListenerTimeoutsElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019860, app::TimeSpan, get_EntityBody, app::HttpListenerTimeoutsElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019890, app::TimeSpan, get_HeaderWait, app::HttpListenerTimeoutsElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020198C0, app::TimeSpan, get_IdleConnection, app::HttpListenerTimeoutsElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020198F0, int64_t, get_MinSendBytesPerSecond, app::HttpListenerTimeoutsElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019920, app::ConfigurationPropertyCollection*, get_Properties, app::HttpListenerTimeoutsElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019950, app::TimeSpan, get_RequestQueue, app::HttpListenerTimeoutsElement* this_ptr)
} // namespace app::classes::System::Net::Configuration::HttpListenerTimeoutsElement
