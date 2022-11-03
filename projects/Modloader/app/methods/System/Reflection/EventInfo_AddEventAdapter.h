#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::EventInfo_AddEventAdapter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EventInfo_AddEventAdapter * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::EventInfo_AddEventAdapter * this_ptr, app::Object* _this, app::Delegate* dele))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::EventInfo_AddEventAdapter * this_ptr, app::Object* _this, app::Delegate* dele, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::EventInfo_AddEventAdapter * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Reflection::EventInfo_AddEventAdapter
