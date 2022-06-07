#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlayFabEvents_PlayFabResultEvent_1_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_System_Object_ * this_ptr, app::Object * result))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::PlayFabEvents_PlayFabResultEvent_1_System_Object_ * this_ptr, app::Object * result, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlayFabEvents_PlayFabResultEvent_1_System_Object_ * this_ptr, app::IAsyncResult * result))
}
