#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_T_Enumerator_UnityEngine_Vector3___Boxed.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x00220FC0, void, ctor, (app::HashSet_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr, app::HashSet_1_UnityEngine_Vector3_* set))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::HashSet_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220FF0, bool, MoveNext, (app::HashSet_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00140C90, app::Vector3, get_Current, (app::HashSet_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00221000, app::Object*, IEnumerator_get_Current, (app::HashSet_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00221140, void, IEnumerator_Reset, (app::HashSet_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_UnityEngine_Vector3_
