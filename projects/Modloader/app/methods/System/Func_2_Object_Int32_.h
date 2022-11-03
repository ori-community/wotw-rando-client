#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_Object_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_Int32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04747EF0, Func_2_Object_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020105B0, int32_t, Invoke, (app::Func_2_Object_Int32_ * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Func_2_Object_Int32_ * this_ptr, app::Object* arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_2_Object_Int32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Object_Int32_
