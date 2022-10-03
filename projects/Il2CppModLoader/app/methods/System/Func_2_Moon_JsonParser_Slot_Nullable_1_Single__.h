#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Nullable_1_Single__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Single_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04788008, Func_2_Moon_JsonParser_Slot_Nullable_1_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02885E00, app::Nullable_1_Single_, Invoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Single_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02888880, app::IAsyncResult*, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Single_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::Nullable_1_Single_, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Single_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Nullable_1_Single__
