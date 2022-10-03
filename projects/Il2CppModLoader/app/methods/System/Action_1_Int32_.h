#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Action_1_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Int32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04742EF8, Action_1_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::Action_1_Int32_ * this_ptr, int32_t obj))
    IL2CPP_REGISTER_METHODINFO(0x0476AF50, Action_1_Int32__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A05AC0, app::IAsyncResult*, BeginInvoke, (app::Action_1_Int32_ * this_ptr, int32_t obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Int32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_Int32_
