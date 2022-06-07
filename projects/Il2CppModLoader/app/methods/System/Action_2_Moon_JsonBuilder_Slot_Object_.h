#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_2_Moon_JsonBuilder_Slot_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Moon_JsonBuilder_Slot_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04721870, Action_2_Moon_JsonBuilder_Slot_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C0E050, void, Invoke, (app::Action_2_Moon_JsonBuilder_Slot_Object_ * this_ptr, app::JsonBuilder_Slot arg1, app::Object * arg2))
    IL2CPP_REGISTER_METHODINFO(0x04787DC0, Action_2_Moon_JsonBuilder_Slot_Object__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C0E480, app::IAsyncResult *, BeginInvoke, (app::Action_2_Moon_JsonBuilder_Slot_Object_ * this_ptr, app::JsonBuilder_Slot arg1, app::Object * arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Moon_JsonBuilder_Slot_Object_ * this_ptr, app::IAsyncResult * result))
}
