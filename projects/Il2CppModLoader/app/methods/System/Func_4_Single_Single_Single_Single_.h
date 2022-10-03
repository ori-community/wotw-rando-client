#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_4_Single_Single_Single_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_4_Single_Single_Single_Single_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0472F4A0, Func_4_Single_Single_Single_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FA9710, float, Invoke, (app::Func_4_Single_Single_Single_Single_ * this_ptr, float arg1, float arg2, float arg3))
    IL2CPP_REGISTER_METHOD(0x02FA9B00, app::IAsyncResult*, BeginInvoke, (app::Func_4_Single_Single_Single_Single_ * this_ptr, float arg1, float arg2, float arg3, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::Func_4_Single_Single_Single_Single_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_4_Single_Single_Single_Single_
