#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult___Boxed.h>
#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RaycastResult.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(
        0x001FA260,
        void,
        ctor,
        app::List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult___Boxed* this_ptr,
        app::List_1_UnityEngine_EventSystems_RaycastResult_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FA2B0, bool, MoveNext, app::List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FA3C0, bool, MoveNextRare, app::List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FA430, app::RaycastResult, get_Current, app::List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FA460, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FA550, void, IEnumerator_Reset, app::List_1_T_Enumerator_UnityEngine_EventSystems_RaycastResult___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_UnityEngine_EventSystems_RaycastResult_
