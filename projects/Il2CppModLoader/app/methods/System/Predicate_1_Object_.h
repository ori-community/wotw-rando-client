#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Predicate_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x047883C8, Predicate_1_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (app::Predicate_1_Object_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x047631C0, Predicate_1_Object__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_Object_ * this_ptr, app::Object * obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_Object_ * this_ptr, app::IAsyncResult * result))
}
