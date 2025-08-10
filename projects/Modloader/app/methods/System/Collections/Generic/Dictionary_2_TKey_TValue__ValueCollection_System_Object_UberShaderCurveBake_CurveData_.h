#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UberShaderCurveBake_CurveData_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollecti_TK_TVal_Enumerat_Syst_Obje_UberShaderCurveBa_CurveDa_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_UberShaderCurveBake_CurveData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_UberShaderCurveBake_CurveData_ {
    IL2CPP_REGISTER_METHOD(
        0x02830AC0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::Dictionary_2_System_Object_UberShaderCurveBake_CurveData_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADB1F0,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02830B90,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::UberShaderCurveBake_CurveData__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02830DD0,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::UberShaderCurveBake_CurveData item
    )
    IL2CPP_REGISTER_METHOD(
        0x02830E30,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::UberShaderCurveBake_CurveData item
    )
    IL2CPP_REGISTER_METHOD(
        0x02830E90,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADB5B0,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::UberShaderCurveBake_CurveData item
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADB600,
        app::IEnumerator_1_UberShaderCurveBake_CurveData_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADB600,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02830EF0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02831360,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UberShaderCurveBake_CurveData_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_UberShaderCurveBake_CurveData_
