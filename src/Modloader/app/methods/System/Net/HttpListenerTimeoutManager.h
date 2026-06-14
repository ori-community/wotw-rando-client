#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpListenerTimeoutManager.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Net::HttpListenerTimeoutManager {
    IL2CPP_REGISTER_METHOD(0x01E58740, app::TimeSpan, get_EntityBody, app::HttpListenerTimeoutManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E58790, void, set_EntityBody, app::HttpListenerTimeoutManager* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01E587E0, app::TimeSpan, get_DrainEntityBody, app::HttpListenerTimeoutManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E58830, void, set_DrainEntityBody, app::HttpListenerTimeoutManager* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01E58880, app::TimeSpan, get_RequestQueue, app::HttpListenerTimeoutManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E588D0, void, set_RequestQueue, app::HttpListenerTimeoutManager* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01E58920, app::TimeSpan, get_IdleConnection, app::HttpListenerTimeoutManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E58970, void, set_IdleConnection, app::HttpListenerTimeoutManager* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01E589C0, app::TimeSpan, get_HeaderWait, app::HttpListenerTimeoutManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E58A10, void, set_HeaderWait, app::HttpListenerTimeoutManager* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01E58A60, int64_t, get_MinSendBytesPerSecond, app::HttpListenerTimeoutManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E58AB0, void, set_MinSendBytesPerSecond, app::HttpListenerTimeoutManager* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HttpListenerTimeoutManager* this_ptr)
} // namespace app::classes::System::Net::HttpListenerTimeoutManager
