#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NativeArray_1_T_Enumerator_UnityEngine_RaycastHit___Boxed.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RaycastHit.h>

namespace app::classes::Unity::Collections::NativeArray_1_T__Enumerator_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(
        0x001DF020,
        void,
        ctor,
        app::NativeArray_1_T_Enumerator_UnityEngine_RaycastHit___Boxed* this_ptr,
        app::NativeArray_1_UnityEngine_RaycastHit_* array
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastHit___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF030, bool, MoveNext, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastHit___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF040, void, Reset, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastHit___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF5A0, app::RaycastHit, get_Current, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastHit___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF5E0, app::Object*, IEnumerator_get_Current, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastHit___Boxed* this_ptr)
} // namespace app::classes::Unity::Collections::NativeArray_1_T__Enumerator_UnityEngine_RaycastHit_
