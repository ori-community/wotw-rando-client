#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StructMultiKey_2_System_Object_System_Object_.h>

namespace app::classes::System::Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Object_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02887790,
        app::Object*,
        Invoke,
        app::Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Object_* this_ptr,
        app::StructMultiKey_2_System_Object_System_Object_ arg
    )
    IL2CPP_REGISTER_METHOD(
        0x02F9D860,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Object_* this_ptr,
        app::StructMultiKey_2_System_Object_System_Object_ arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        app::Object*,
        EndInvoke,
        app::Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Object_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Object_
