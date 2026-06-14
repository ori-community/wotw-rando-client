#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_IEventSystemHandler_.h>
#include <Modloader/app/structs/ObjectPool_1_System_Collections_Generic_List_1_.h>
#include <Modloader/app/structs/UnityAction_1_System_Collections_Generic_List_1_.h>

namespace app::classes::UnityEngine::UI::ObjectPool_1_System_Collections_Generic_List_1_ {
    IL2CPP_REGISTER_METHOD(
        0x02ACEDE0,
        void,
        ctor,
        app::ObjectPool_1_System_Collections_Generic_List_1_* this_ptr,
        app::UnityAction_1_System_Collections_Generic_List_1_* action_on_get,
        app::UnityAction_1_System_Collections_Generic_List_1_* action_on_release
    )
    IL2CPP_REGISTER_METHOD(
        0x02ACEFA0,
        app::List_1_UnityEngine_EventSystems_IEventSystemHandler_*,
        Get,
        app::ObjectPool_1_System_Collections_Generic_List_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02ACF090,
        void,
        Release,
        app::ObjectPool_1_System_Collections_Generic_List_1_* this_ptr,
        app::List_1_UnityEngine_EventSystems_IEventSystemHandler_* element
    )
} // namespace app::classes::UnityEngine::UI::ObjectPool_1_System_Collections_Generic_List_1_
