#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_1_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::Action_1_Boolean_ * this_ptr, bool obj))
    IL2CPP_REGISTER_METHODINFO(0x0471EBB0, Action_1_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04768580, Action_1_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A04470, app::IAsyncResult*, BeginInvoke, (app::Action_1_Boolean_ * this_ptr, bool obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_Boolean_
