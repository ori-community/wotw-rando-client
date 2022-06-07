#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ExecuteEvents_EventFunction_1_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::ExecuteEvents_EventFunction_1_System_Object_ * this_ptr, app::Object * handler, app::BaseEventData * event_data))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::ExecuteEvents_EventFunction_1_System_Object_ * this_ptr, app::Object * handler, app::BaseEventData * event_data, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ExecuteEvents_EventFunction_1_System_Object_ * this_ptr, app::IAsyncResult * result))
}
