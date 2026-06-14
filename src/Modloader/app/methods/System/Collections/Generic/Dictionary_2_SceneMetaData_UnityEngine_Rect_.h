#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SceneMetaData_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneMetaData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SceneMetaData_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(
        0x02BC76A0,
        bool,
        TryGetValue,
        app::Dictionary_2_SceneMetaData_UnityEngine_Rect_* this_ptr,
        app::SceneMetaData* key,
        app::Rect* value
    )
    IL2CPP_REGISTER_METHOD(0x02BC57C0, void, set_Item, app::Dictionary_2_SceneMetaData_UnityEngine_Rect_* this_ptr, app::SceneMetaData* key, app::Rect value)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_SceneMetaData_UnityEngine_Rect_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SceneMetaData_UnityEngine_Rect_
