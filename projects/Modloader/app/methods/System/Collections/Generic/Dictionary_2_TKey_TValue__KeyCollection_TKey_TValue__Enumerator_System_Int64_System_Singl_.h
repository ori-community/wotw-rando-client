#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int64_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue__Enumerator_System_Int64_System_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x001438F0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single___Boxed* this_ptr,
        app::Dictionary_2_System_Int64_System_Single_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00147B80,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00107C20,
        int64_t,
        get_Current,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00147B90,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00147CB0,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int64_System_Single___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue__Enumerator_System_Int64_System_Single_
