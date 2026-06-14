#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Object_NearbySceneData_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed.h>
#include <Modloader/app/structs/NearbySceneData.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue__Enumerator_System_Object_NearbySceneData_ {
    IL2CPP_REGISTER_METHOD(
        0x0018B500,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr,
        app::Dictionary_2_System_Object_NearbySceneData_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0019F390,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::NearbySceneData,
        get_Current,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0019F3A0,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0019F4C0,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue__Enumerator_System_Object_NearbySceneData_
