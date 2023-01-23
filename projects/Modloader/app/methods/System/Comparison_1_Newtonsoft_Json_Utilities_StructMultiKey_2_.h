#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StructMultiKey_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * this_ptr, app::StructMultiKey_2_System_Object_System_Object_ x, app::StructMultiKey_2_System_Object_System_Object_ y))
    IL2CPP_REGISTER_METHOD(0x02C7B3A0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * this_ptr, app::StructMultiKey_2_System_Object_System_Object_ x, app::StructMultiKey_2_System_Object_System_Object_ y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_
