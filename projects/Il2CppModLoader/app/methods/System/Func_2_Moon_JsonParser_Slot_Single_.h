#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Moon_JsonParser_Slot_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Single_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0472D820, Func_2_Moon_JsonParser_Slot_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028862E0, float, Invoke, (app::Func_2_Moon_JsonParser_Slot_Single_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02F9D520, app::IAsyncResult *, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Single_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Single_ * this_ptr, app::IAsyncResult * result))
}
