#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_UIVertex___Boxed.h>
#include <Modloader/app/structs/List_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/UIVertex.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_UnityEngine_UIVertex_ {
    IL2CPP_REGISTER_METHOD(0x001FAF30, void, ctor, (app::List_1_T_Enumerator_UnityEngine_UIVertex___Boxed * this_ptr, app::List_1_UnityEngine_UIVertex_* list))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::List_1_T_Enumerator_UnityEngine_UIVertex___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FAF80, bool, MoveNext, (app::List_1_T_Enumerator_UnityEngine_UIVertex___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FB0A0, bool, MoveNextRare, (app::List_1_T_Enumerator_UnityEngine_UIVertex___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FB110, app::UIVertex, get_Current, (app::List_1_T_Enumerator_UnityEngine_UIVertex___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FB150, app::Object*, IEnumerator_get_Current, (app::List_1_T_Enumerator_UnityEngine_UIVertex___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FB240, void, IEnumerator_Reset, (app::List_1_T_Enumerator_UnityEngine_UIVertex___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_UnityEngine_UIVertex_
