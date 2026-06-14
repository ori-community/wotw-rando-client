#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallSite_1_System_Func_3_.h>
#include <Modloader/app/structs/CallSite_1_System_Func_4_.h>
#include <Modloader/app/structs/Func_2_String_System_Runtime_CompilerServices_CallSite_1_.h>
#include <Modloader/app/structs/Func_2_String_System_Runtime_CompilerServices_CallSite_1__1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1_.h>
#include <Modloader/app/structs/ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1__1.h>

namespace app::classes::Newtonsoft::Json::Utilities::ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1_ {
    IL2CPP_REGISTER_METHOD(
        0x01D12150,
        void,
        ctor_1,
        app::ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1_* this_ptr,
        app::Func_2_String_System_Runtime_CompilerServices_CallSite_1_* creator
    )
    IL2CPP_REGISTER_METHOD(
        0x01D12150,
        void,
        ctor_2,
        app::ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1__1* this_ptr,
        app::Func_2_String_System_Runtime_CompilerServices_CallSite_1__1* creator
    )
    IL2CPP_REGISTER_METHOD(
        0x01D122F0,
        app::CallSite_1_System_Func_3_*,
        Get_1,
        app::ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1_* this_ptr,
        app::String* key
    )
    IL2CPP_REGISTER_METHOD(
        0x01D122F0,
        app::CallSite_1_System_Func_4_*,
        Get_2,
        app::ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1__1* this_ptr,
        app::String* key
    )
} // namespace app::classes::Newtonsoft::Json::Utilities::ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1_
