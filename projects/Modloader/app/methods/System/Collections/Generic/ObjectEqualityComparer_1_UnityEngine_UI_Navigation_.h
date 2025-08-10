#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Navigation.h>
#include <Modloader/app/structs/Navigation__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_UI_Navigation_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_ {
    IL2CPP_REGISTER_METHOD(0x01CD2D60, bool, Equals_1, app::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_* this_ptr, app::Navigation x, app::Navigation y)
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_* this_ptr, app::Navigation obj)
    IL2CPP_REGISTER_METHOD(
        0x01CD2E30,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_* this_ptr,
        app::Navigation__Array* array,
        app::Navigation value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD2FD0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_* this_ptr,
        app::Navigation__Array* array,
        app::Navigation value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_UI_Navigation_
