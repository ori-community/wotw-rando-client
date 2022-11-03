#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Timers::ElapsedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ElapsedEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::ElapsedEventHandler * this_ptr, app::Object* sender, app::ElapsedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::ElapsedEventHandler * this_ptr, app::Object* sender, app::ElapsedEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ElapsedEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Timers::ElapsedEventHandler
