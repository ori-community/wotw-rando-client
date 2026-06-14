#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_UnityEngine_Vector3___Boxed.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x00234810, void, ctor, app::Stack_1_T_Enumerator_UnityEngine_Vector3___Boxed* this_ptr, app::Stack_1_UnityEngine_Vector3_* stack)
    IL2CPP_REGISTER_METHOD(0x002337F0, void, Dispose, app::Stack_1_T_Enumerator_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00234840, bool, MoveNext, app::Stack_1_T_Enumerator_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00234850, app::Vector3, get_Current, app::Stack_1_T_Enumerator_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002348A0, void, ThrowEnumerationNotStartedOrEnded, app::Stack_1_T_Enumerator_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002348B0, app::Object*, IEnumerator_get_Current, app::Stack_1_T_Enumerator_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00234970, void, IEnumerator_Reset, app::Stack_1_T_Enumerator_UnityEngine_Vector3___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_UnityEngine_Vector3_
