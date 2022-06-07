#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::MethodCall_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::MethodCall_2_System_Object_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04707E38, MethodCall_2_System_Object_System_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D117F0, app::Object *, Invoke, (app::MethodCall_2_System_Object_System_Object_ * this_ptr, app::Object * target, app::Object__Array * args))
    IL2CPP_REGISTER_METHODINFO(0x047190F0, MethodCall_2_System_Object_System_Object__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::MethodCall_2_System_Object_System_Object_ * this_ptr, app::Object * target, app::Object__Array * args, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::MethodCall_2_System_Object_System_Object_ * this_ptr, app::IAsyncResult * result))
}
