#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UberShaderCurveBake_CurveData_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_UberShaderCurveBake_CurveData_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_UberShaderCurveBake_CurveData_ {
    IL2CPP_REGISTER_METHOD(
        0x00135060,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr,
        app::Dictionary_2_System_Object_UberShaderCurveBake_CurveData_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x001BF6B0, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001350C0,
        app::KeyValuePair_2_System_Object_UberShaderCurveBake_CurveData_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001BF6C0,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BF6D0,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BF7B0,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BF950,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BFA40,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberShaderCurveBake_CurveData___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_UberShaderCurveBake_CurveData_
