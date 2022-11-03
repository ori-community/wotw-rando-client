#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_DamageResult_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_DamageResult_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04795948, Action_1_DamageResult___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (app::Action_1_DamageResult_ * this_ptr, app::DamageResult obj))
    IL2CPP_REGISTER_METHODINFO(0x04711FE8, Action_1_DamageResult__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029FC8F0, app::IAsyncResult*, BeginInvoke, (app::Action_1_DamageResult_ * this_ptr, app::DamageResult obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_DamageResult_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_DamageResult_
