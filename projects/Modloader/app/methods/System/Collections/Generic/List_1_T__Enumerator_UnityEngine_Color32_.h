#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_Color32___Boxed.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x0014E7D0, void, ctor, (app::List_1_T_Enumerator_UnityEngine_Color32___Boxed * this_ptr, app::List_1_UnityEngine_Color32_* list))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::List_1_T_Enumerator_UnityEngine_Color32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014E800, bool, MoveNext, (app::List_1_T_Enumerator_UnityEngine_Color32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014E8C0, bool, MoveNextRare, (app::List_1_T_Enumerator_UnityEngine_Color32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114150, app::Color32, get_Current, (app::List_1_T_Enumerator_UnityEngine_Color32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014E910, app::Object*, IEnumerator_get_Current, (app::List_1_T_Enumerator_UnityEngine_Color32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014E9D0, void, IEnumerator_Reset, (app::List_1_T_Enumerator_UnityEngine_Color32___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_UnityEngine_Color32_
