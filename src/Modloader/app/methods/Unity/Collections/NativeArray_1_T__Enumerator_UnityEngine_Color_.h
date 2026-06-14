#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/NativeArray_1_T_Enumerator_UnityEngine_Color___Boxed.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Unity::Collections::NativeArray_1_T__Enumerator_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(
        0x001DF020,
        void,
        ctor,
        app::NativeArray_1_T_Enumerator_UnityEngine_Color___Boxed* this_ptr,
        app::NativeArray_1_UnityEngine_Color_* array
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::NativeArray_1_T_Enumerator_UnityEngine_Color___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF030, bool, MoveNext, app::NativeArray_1_T_Enumerator_UnityEngine_Color___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF040, void, Reset, app::NativeArray_1_T_Enumerator_UnityEngine_Color___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF350, app::Color, get_Current, app::NativeArray_1_T_Enumerator_UnityEngine_Color___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF370, app::Object*, IEnumerator_get_Current, app::NativeArray_1_T_Enumerator_UnityEngine_Color___Boxed* this_ptr)
} // namespace app::classes::Unity::Collections::NativeArray_1_T__Enumerator_UnityEngine_Color_
