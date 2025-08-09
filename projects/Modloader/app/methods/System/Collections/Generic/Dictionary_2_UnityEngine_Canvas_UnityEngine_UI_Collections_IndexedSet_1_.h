#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Canvas_UnityEngine_UI_Collections_IndexedSet_1_.h>
#include <Modloader/app/structs/IndexedSet_1_UnityEngine_UI_Graphic_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Canvas_UnityEngine_UI_Collections_IndexedSet_1_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_Canvas_UnityEngine_UI_Collections_IndexedSet_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_UnityEngine_Canvas_UnityEngine_UI_Collections_IndexedSet_1_* this_ptr,
        app::Canvas* key,
        app::IndexedSet_1_UnityEngine_UI_Graphic_** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_UnityEngine_Canvas_UnityEngine_UI_Collections_IndexedSet_1_* this_ptr,
        app::Canvas* key,
        app::IndexedSet_1_UnityEngine_UI_Graphic_* value
    )
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_UnityEngine_Canvas_UnityEngine_UI_Collections_IndexedSet_1_* this_ptr, app::Canvas* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Canvas_UnityEngine_UI_Collections_IndexedSet_1_
