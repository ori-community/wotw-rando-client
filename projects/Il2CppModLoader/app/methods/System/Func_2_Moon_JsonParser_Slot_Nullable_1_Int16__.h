#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Moon_JsonParser_Slot_Nullable_1_Int16__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Int16_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04751C40, Func_2_Moon_JsonParser_Slot_Nullable_1_Int16___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028872B0, app::Nullable_1_Int16_, Invoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Int16_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02888540, app::IAsyncResult *, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Int16_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::Nullable_1_Int16_, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Int16_ * this_ptr, app::IAsyncResult * result))
}
