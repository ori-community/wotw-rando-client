#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_UnityEngine_UI_ICanvasElement_.h>
#include <Modloader/app/structs/ICanvasElement.h>
#include <Modloader/app/structs/IndexedSet_1_UnityEngine_UI_ICanvasElement_.h>

namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_UnityEngine_UI_ICanvasElement_ {
    IL2CPP_REGISTER_METHOD(0x02ACD120, void, ctor, app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACD5F0, int32_t, get_Count, app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACD8A0, app::ICanvasElement*, get_Item, app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02ACD6C0, void, RemoveAt, app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02ACDAD0,
        void,
        Sort,
        app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr,
        app::Comparison_1_UnityEngine_UI_ICanvasElement_* sort_layout_function
    )
    IL2CPP_REGISTER_METHOD(0x0271D0C0, void, Clear, app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACD590, bool, Contains, app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr, app::ICanvasElement* item)
    IL2CPP_REGISTER_METHOD(0x02ACD3D0, bool, AddUnique, app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr, app::ICanvasElement* item)
    IL2CPP_REGISTER_METHOD(0x02ACD4C0, bool, Remove, app::IndexedSet_1_UnityEngine_UI_ICanvasElement_* this_ptr, app::ICanvasElement* item)
} // namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_UnityEngine_UI_ICanvasElement_
