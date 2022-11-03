#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_Moon_JsonParser_Slot_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_UInt32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047434F8, Func_2_Moon_JsonParser_Slot_UInt32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028872B0, uint32_t, Invoke, (app::Func_2_Moon_JsonParser_Slot_UInt32_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02F9D6C0, app::IAsyncResult*, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_UInt32_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_UInt32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Moon_JsonParser_Slot_UInt32_
