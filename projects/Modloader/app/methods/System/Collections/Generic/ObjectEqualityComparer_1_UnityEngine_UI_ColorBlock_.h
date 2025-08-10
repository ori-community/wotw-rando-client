#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ColorBlock.h>
#include <Modloader/app/structs/ColorBlock__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_ {
    IL2CPP_REGISTER_METHOD(0x024397B0, bool, Equals_1, app::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_* this_ptr, app::ColorBlock x, app::ColorBlock y)
    IL2CPP_REGISTER_METHOD(0x02439840, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_* this_ptr, app::ColorBlock obj)
    IL2CPP_REGISTER_METHOD(
        0x02439860,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_* this_ptr,
        app::ColorBlock__Array* array,
        app::ColorBlock value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02439990,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_* this_ptr,
        app::ColorBlock__Array* array,
        app::ColorBlock value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_UI_ColorBlock_
