#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_T_Enumerator_UnityEngine_Vector2___Boxed.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x00220540, void, ctor, (app::HashSet_1_T_Enumerator_UnityEngine_Vector2___Boxed * this_ptr, app::HashSet_1_UnityEngine_Vector2_* set))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::HashSet_1_T_Enumerator_UnityEngine_Vector2___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220DA0, bool, MoveNext, (app::HashSet_1_T_Enumerator_UnityEngine_Vector2___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014CD90, app::Vector2, get_Current, (app::HashSet_1_T_Enumerator_UnityEngine_Vector2___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220DB0, app::Object*, IEnumerator_get_Current, (app::HashSet_1_T_Enumerator_UnityEngine_Vector2___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220EF0, void, IEnumerator_Reset, (app::HashSet_1_T_Enumerator_UnityEngine_Vector2___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_UnityEngine_Vector2_
