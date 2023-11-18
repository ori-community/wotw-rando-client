#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AspectRatioFitter.h>
#include <Modloader/app/structs/AspectRatioFitter_AspectMode__Enum.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::UI::AspectRatioFitter {
    IL2CPP_REGISTER_METHOD(0x01F2AB50, void, ctor, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AB70, app::AspectRatioFitter_AspectMode__Enum, get_aspectMode, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AB80, void, set_aspectMode, (app::AspectRatioFitter * this_ptr, app::AspectRatioFitter_AspectMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x01F2AC20, float, get_aspectRatio, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AC30, void, set_aspectRatio, (app::AspectRatioFitter * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01F2AD00, app::RectTransform*, get_rectTransform, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2ADD0, void, OnEnable, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2ADE0, void, OnDisable, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AE90, void, Update, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2ADD0, void, OnRectTransformDimensionsChange, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AEB0, void, UpdateRect, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B250, float, GetSizeDeltaToProduceSize, (app::AspectRatioFitter * this_ptr, float size, int32_t axis))
    IL2CPP_REGISTER_METHOD(0x01F2B3E0, app::Vector2, GetParentSize, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetLayoutHorizontal, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetLayoutVertical, (app::AspectRatioFitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2ADD0, void, SetDirty, (app::AspectRatioFitter * this_ptr))
} // namespace app::classes::UnityEngine::UI::AspectRatioFitter
