#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UberShaderCurveBake_CurveData_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_KeyCollectio_TKe_TVal_Enumerat_Syst_Obje_UberShaderCurveBa_CurveDa_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_Object_UberShaderCurveBake_CurveData_ {
    IL2CPP_REGISTER_METHOD(
        0x01A728D0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::Dictionary_2_System_Object_UberShaderCurveBake_CurveData_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A729A0,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A729E0,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::Object__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TKey__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72C40,
        void,
        System_Collections_Generic_ICollection_TKey__Add,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::Object* item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72CA0,
        void,
        System_Collections_Generic_ICollection_TKey__Clear,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D00,
        bool,
        System_Collections_Generic_ICollection_TKey__Contains,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::Object* item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D30,
        bool,
        System_Collections_Generic_ICollection_TKey__Remove,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::Object* item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator_1_System_Object_*,
        System_Collections_Generic_IEnumerable_TKey__GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72E20,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A73230,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_Object_UberShaderCurveBake_CurveData_
