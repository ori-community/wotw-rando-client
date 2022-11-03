#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Configuration::HttpListenerTimeoutsElement {
    IL2CPP_REGISTER_METHOD(0x02019800, void, ctor, (app::HttpListenerTimeoutsElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047854B0, HttpListenerTimeoutsElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019830, app::TimeSpan, get_DrainEntityBody, (app::HttpListenerTimeoutsElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473CEE0, HttpListenerTimeoutsElement_get_DrainEntityBody__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019860, app::TimeSpan, get_EntityBody, (app::HttpListenerTimeoutsElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742668, HttpListenerTimeoutsElement_get_EntityBody__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019890, app::TimeSpan, get_HeaderWait, (app::HttpListenerTimeoutsElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778990, HttpListenerTimeoutsElement_get_HeaderWait__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020198C0, app::TimeSpan, get_IdleConnection, (app::HttpListenerTimeoutsElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472CF50, HttpListenerTimeoutsElement_get_IdleConnection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020198F0, int64_t, get_MinSendBytesPerSecond, (app::HttpListenerTimeoutsElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F338, HttpListenerTimeoutsElement_get_MinSendBytesPerSecond__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019920, app::ConfigurationPropertyCollection*, get_Properties, (app::HttpListenerTimeoutsElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774A48, HttpListenerTimeoutsElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019950, app::TimeSpan, get_RequestQueue, (app::HttpListenerTimeoutsElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047685A8, HttpListenerTimeoutsElement_get_RequestQueue__MethodInfo)
} // namespace app::classes::System::Net::Configuration::HttpListenerTimeoutsElement
