#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LayoutElement.h>

namespace app::classes::UnityEngine::UI::LayoutElement {
    IL2CPP_REGISTER_METHOD(0x024CEFE0, void, ctor, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_ignoreLayout, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF020, void, set_ignoreLayout, (app::LayoutElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputHorizontal, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputVertical, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AC20, float, get_minWidth, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF0F0, void, set_minWidth, (app::LayoutElement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01F2C2A0, float, get_minHeight, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF1C0, void, set_minHeight, (app::LayoutElement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x024AD1C0, float, get_preferredWidth, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF290, void, set_preferredWidth, (app::LayoutElement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x024CF360, float, get_preferredHeight, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF370, void, set_preferredHeight, (app::LayoutElement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x024CF440, float, get_flexibleWidth, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF450, void, set_flexibleWidth, (app::LayoutElement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01F2C500, float, get_flexibleHeight, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF520, void, set_flexibleHeight, (app::LayoutElement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01F1C1C0, int32_t, get_layoutPriority, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF5F0, void, set_layoutPriority, (app::LayoutElement * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnEnable, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnTransformParentChanged, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnDisable, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnDidApplyAnimationProperties, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF6C0, void, OnBeforeTransformParentChanged, (app::LayoutElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CF6D0, void, SetDirty, (app::LayoutElement * this_ptr))
} // namespace app::classes::UnityEngine::UI::LayoutElement
