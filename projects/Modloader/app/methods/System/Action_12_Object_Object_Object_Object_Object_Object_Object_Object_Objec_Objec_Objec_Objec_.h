#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_12_Object_Object_Object_Object_Object_Object_Object_Object_Objec_Objec_Objec_Objec_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_12_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_12_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D1FB90, void, Invoke, (app::Action_12_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Object* arg3, app::Object* arg4, app::Object* arg5, app::Object* arg6, app::Object* arg7, app::Object* arg8, app::Object* arg9, app::Object* arg10, app::Object* arg11, app::Object* arg12))
    IL2CPP_REGISTER_METHOD(0x01D20970, app::IAsyncResult*, BeginInvoke, (app::Action_12_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Object* arg3, app::Object* arg4, app::Object* arg5, app::Object* arg6, app::Object* arg7, app::Object* arg8, app::Object* arg9, app::Object* arg10, app::Object* arg11, app::Object* arg12, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_12_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_12_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_
