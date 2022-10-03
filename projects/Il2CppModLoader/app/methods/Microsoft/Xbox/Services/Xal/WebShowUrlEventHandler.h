#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::WebShowUrlEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::WebShowUrlEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01435330, void, Invoke, (app::WebShowUrlEventHandler * this_ptr, void* operation_id, app::String* start_url, app::String* final_url, bool suppress_ui))
    IL2CPP_REGISTER_METHOD(0x01435740, app::IAsyncResult*, BeginInvoke, (app::WebShowUrlEventHandler * this_ptr, void* operation_id, app::String* start_url, app::String* final_url, bool suppress_ui, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::WebShowUrlEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::WebShowUrlEventHandler
