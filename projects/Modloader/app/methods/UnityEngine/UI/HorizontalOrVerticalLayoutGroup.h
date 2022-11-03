#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
    IL2CPP_REGISTER_METHOD(0x024B6530, void, ctor, (app::HorizontalOrVerticalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B65B0, float, get_spacing, (app::HorizontalOrVerticalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B65C0, void, set_spacing, (app::HorizontalOrVerticalLayoutGroup * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x024B66B0, bool, get_childForceExpandWidth, (app::HorizontalOrVerticalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B66C0, void, set_childForceExpandWidth, (app::HorizontalOrVerticalLayoutGroup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x024B6750, bool, get_childForceExpandHeight, (app::HorizontalOrVerticalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B6760, void, set_childForceExpandHeight, (app::HorizontalOrVerticalLayoutGroup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x024B67F0, bool, get_childControlWidth, (app::HorizontalOrVerticalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B6800, void, set_childControlWidth, (app::HorizontalOrVerticalLayoutGroup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x024B6890, bool, get_childControlHeight, (app::HorizontalOrVerticalLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B68A0, void, set_childControlHeight, (app::HorizontalOrVerticalLayoutGroup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x024B6930, void, CalcAlongAxis, (app::HorizontalOrVerticalLayoutGroup * this_ptr, int32_t axis, bool is_vertical))
    IL2CPP_REGISTER_METHOD(0x024B6CB0, void, SetChildrenAlongAxis, (app::HorizontalOrVerticalLayoutGroup * this_ptr, int32_t axis, bool is_vertical))
    IL2CPP_REGISTER_METHOD(0x024B74C0, void, GetChildSizes, (app::HorizontalOrVerticalLayoutGroup * this_ptr, app::RectTransform* child, int32_t axis, bool control_size, bool child_force_expand, float* min, float* preferred, float* flexible))
} // namespace app::classes::UnityEngine::UI::HorizontalOrVerticalLayoutGroup
