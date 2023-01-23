#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NativeArray_1_T_Enumerator_UnityEngine_Vector3___Boxed.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Unity::Collections::NativeArray_1_T__Enumerator_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x001DF020, void, ctor, (app::NativeArray_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr, app::NativeArray_1_UnityEngine_Vector3_* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::NativeArray_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DF030, bool, MoveNext, (app::NativeArray_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DF040, void, Reset, (app::NativeArray_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DF400, app::Vector3, get_Current, (app::NativeArray_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DF430, app::Object*, IEnumerator_get_Current, (app::NativeArray_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
} // namespace app::classes::Unity::Collections::NativeArray_1_T__Enumerator_UnityEngine_Vector3_
