#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Nullable_1_Int64__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Int64_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476AD48, Func_2_Moon_JsonParser_Slot_Nullable_1_Int64___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028867C0, app::Nullable_1_Int64_, Invoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Int64_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x028886E0, app::IAsyncResult*, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Int64_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::Nullable_1_Int64_, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Int64_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Nullable_1_Int64__
