#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Callback_1_T_DispatchDelegate_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Steamworks::Callback_1_T__DispatchDelegate_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Callback_1_T_DispatchDelegate_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Callback_1_T_DispatchDelegate_System_Object_ * this_ptr, app::Object* param))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Callback_1_T_DispatchDelegate_System_Object_ * this_ptr, app::Object* param, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Callback_1_T_DispatchDelegate_System_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::Callback_1_T__DispatchDelegate_System_Object_
