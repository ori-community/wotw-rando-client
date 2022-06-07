#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Moon_JsonParser_Slot_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04748870, Func_2_Moon_JsonParser_Slot_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Func_2_Moon_JsonParser_Slot_Boolean_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02885C60, app::IAsyncResult *, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Boolean_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Boolean_ * this_ptr, app::IAsyncResult * result))
}
