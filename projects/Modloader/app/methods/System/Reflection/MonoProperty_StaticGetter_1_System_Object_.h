#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoProperty_StaticGetter_1_System_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Reflection::MonoProperty_StaticGetter_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::MonoProperty_StaticGetter_1_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01938310, app::Object*, Invoke, (app::MonoProperty_StaticGetter_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::MonoProperty_StaticGetter_1_System_Object_ * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::MonoProperty_StaticGetter_1_System_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Reflection::MonoProperty_StaticGetter_1_System_Object_
