#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UnityEngine_UI_RectMask2D_.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::UnityEngine::UI::Clipping {
    IL2CPP_REGISTER_METHOD(0x01F2F9E0, app::Rect, FindCullAndClipWorldRect, app::List_1_UnityEngine_UI_RectMask2D_* rect_mask_parents, bool* valid_rect)
    IL2CPP_REGISTER_METHOD(0x01F2FDB0, app::Rect, RectIntersect, app::Rect a, app::Rect b)
} // namespace app::classes::UnityEngine::UI::Clipping
