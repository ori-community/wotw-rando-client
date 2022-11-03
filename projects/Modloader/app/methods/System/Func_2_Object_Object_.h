#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0473C4F0, Func_2_Object_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object*, Invoke, (app::Func_2_Object_Object_ * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHODINFO(0x0478C710, Func_2_Object_Object__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Func_2_Object_Object_ * this_ptr, app::Object* arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::Func_2_Object_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Object_Object_
