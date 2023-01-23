#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_2_Object_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_2_Object_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Object_Single_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C12050, void, Invoke, (app::Action_2_Object_Single_ * this_ptr, app::Object* arg1, float arg2))
    IL2CPP_REGISTER_METHOD(0x02C12590, app::IAsyncResult*, BeginInvoke, (app::Action_2_Object_Single_ * this_ptr, app::Object* arg1, float arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Object_Single_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_2_Object_Single_
