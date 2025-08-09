#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int64_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Int64__1.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_Int64_System_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x026A1A80,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr,
        app::Dictionary_2_System_Int64_System_Single_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A729A0,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026A1B50,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr,
        app::Int64__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TKey__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026A1D80,
        void,
        System_Collections_Generic_ICollection_TKey__Add,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr,
        int64_t item
    )
    IL2CPP_REGISTER_METHOD(
        0x026A1DE0,
        void,
        System_Collections_Generic_ICollection_TKey__Clear,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D00,
        bool,
        System_Collections_Generic_ICollection_TKey__Contains,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr,
        int64_t item
    )
    IL2CPP_REGISTER_METHOD(
        0x026A1E40,
        bool,
        System_Collections_Generic_ICollection_TKey__Remove,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr,
        int64_t item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator_1_System_Int64__1*,
        System_Collections_Generic_IEnumerable_TKey__GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026A1EA0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026A22F0,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int64_System_Single_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_Int64_System_Single_
