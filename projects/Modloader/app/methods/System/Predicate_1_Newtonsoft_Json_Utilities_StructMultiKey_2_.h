#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_Newtonsoft_Json_Utilities_StructMultiKey_2_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StructMultiKey_2_System_Object_System_Object_.h>

namespace app::classes::System::Predicate_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * this_ptr, app::StructMultiKey_2_System_Object_System_Object_ obj))
    IL2CPP_REGISTER_METHOD(0x02A4F710, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * this_ptr, app::StructMultiKey_2_System_Object_System_Object_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_Newtonsoft_Json_Utilities_StructMultiKey_2_
