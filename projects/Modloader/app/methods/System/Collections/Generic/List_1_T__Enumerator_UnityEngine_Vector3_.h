#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_Vector3___Boxed.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x00140C90, app::Vector3, get_Current, (app::List_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014D2D0, bool, MoveNext, (app::List_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::List_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014D2A0, void, ctor, (app::List_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr, app::List_1_UnityEngine_Vector3_* list))
    IL2CPP_REGISTER_METHOD(0x0014D3A0, bool, MoveNextRare, (app::List_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014D3F0, app::Object*, IEnumerator_get_Current, (app::List_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014D4B0, void, IEnumerator_Reset, (app::List_1_T_Enumerator_UnityEngine_Vector3___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_UnityEngine_Vector3_
