#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_Guid_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Guid_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04792160, Action_1_Guid___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_Guid_ * this_ptr, app::Guid obj))
    IL2CPP_REGISTER_METHODINFO(0x0472FE58, Action_1_Guid__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A05920, app::IAsyncResult*, BeginInvoke, (app::Action_1_Guid_ * this_ptr, app::Guid obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Guid_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_Guid_
