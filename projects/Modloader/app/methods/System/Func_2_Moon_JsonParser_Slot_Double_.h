#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Double_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Double_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047491A8, Func_2_Moon_JsonParser_Slot_Double___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028862E0, double, Invoke, (app::Func_2_Moon_JsonParser_Slot_Double_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x028866F0, app::IAsyncResult*, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Double_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028818A0, double, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Double_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Double_
