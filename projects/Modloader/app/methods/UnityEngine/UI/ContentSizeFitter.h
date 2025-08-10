#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContentSizeFitter.h>
#include <Modloader/app/structs/ContentSizeFitter_FitMode__Enum.h>
#include <Modloader/app/structs/RectTransform.h>

namespace app::classes::UnityEngine::UI::ContentSizeFitter {
    IL2CPP_REGISTER_METHOD(0x01F30480, void, ctor, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2AB70, app::ContentSizeFitter_FitMode__Enum, get_horizontalFit, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F30490, void, set_horizontalFit, app::ContentSizeFitter* this_ptr, app::ContentSizeFitter_FitMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x01F30530, app::ContentSizeFitter_FitMode__Enum, get_verticalFit, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F30540, void, set_verticalFit, app::ContentSizeFitter* this_ptr, app::ContentSizeFitter_FitMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x01F305E0, app::RectTransform*, get_rectTransform, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F306B0, void, OnEnable, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F306C0, void, OnDisable, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F306B0, void, OnRectTransformDimensionsChange, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F30770, void, HandleSelfFittingAlongAxis, app::ContentSizeFitter* this_ptr, int32_t axis)
    IL2CPP_REGISTER_METHOD(0x01F30820, void, SetLayoutHorizontal, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F308A0, void, SetLayoutVertical, app::ContentSizeFitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F30920, void, SetDirty, app::ContentSizeFitter* this_ptr)
} // namespace app::classes::UnityEngine::UI::ContentSizeFitter
