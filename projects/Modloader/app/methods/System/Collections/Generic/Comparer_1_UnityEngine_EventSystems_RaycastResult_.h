#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_UnityEngine_EventSystems_RaycastResult_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x028D1750,
        app::Comparer_1_UnityEngine_EventSystems_RaycastResult_*,
        Create,
        app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x028D1950, app::Comparer_1_UnityEngine_EventSystems_RaycastResult_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x028D1F20,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_UnityEngine_EventSystems_RaycastResult_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_UnityEngine_EventSystems_RaycastResult_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_EventSystems_RaycastResult_
