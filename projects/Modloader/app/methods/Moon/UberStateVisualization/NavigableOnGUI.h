#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUILayoutOption__Array.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/NavigableOnGUI_Field.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::UberStateVisualization::NavigableOnGUI {
    IL2CPP_REGISTER_METHOD(0x01B73260, bool, get_isSelected, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B73280, void, ctor, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B732A0, void, SetSelectedIndex, app::NavigableOnGUI* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01B732B0, void, UpdateInput, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B73C80, void, ClearInput, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B73C90, void, BeginOnGUI, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B73CB0, void, EndOnGUI, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B73CD0, void, BeginControl, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B73EF0, void, EndControl, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B740C0, bool, Button, app::NavigableOnGUI* this_ptr, app::String* label, app::GUILayoutOption__Array* options)
    IL2CPP_REGISTER_METHOD(0x01B741D0, bool, Toggle, app::NavigableOnGUI* this_ptr, bool value, app::String* label, app::GUILayoutOption__Array* options)
    IL2CPP_REGISTER_METHOD(0x01B742E0, bool, Foldout, app::NavigableOnGUI* this_ptr, bool value, app::String* label, app::GUILayoutOption__Array* options)
    IL2CPP_REGISTER_METHOD(
        0x01B74480,
        float,
        HorizontalSlider,
        app::NavigableOnGUI* this_ptr,
        float value,
        float min,
        float max,
        app::GUILayoutOption__Array* options
    )
    IL2CPP_REGISTER_METHOD(0x01B74650, float, FloatInput, app::NavigableOnGUI* this_ptr, float value, app::GUILayoutOption__Array* options)
    IL2CPP_REGISTER_METHOD(0x00888E60, int32_t, IntInput, app::NavigableOnGUI* this_ptr, int32_t value, app::GUILayoutOption__Array* options)
    IL2CPP_REGISTER_METHOD(0x01B74770, void, BeginField, app::NavigableOnGUI* this_ptr, app::String* label)
    IL2CPP_REGISTER_METHOD(0x01B74940, void, EndField, app::NavigableOnGUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B74A70, app::NavigableOnGUI_Field, GetField, app::NavigableOnGUI* this_ptr, app::String* label)
    IL2CPP_REGISTER_METHOD(0x01B74AA0, bool, ButtonField, app::NavigableOnGUI* this_ptr, app::String* label)
    IL2CPP_REGISTER_METHOD(0x01B74C00, bool, FoldoutField, app::NavigableOnGUI* this_ptr, app::String* label, bool value)
    IL2CPP_REGISTER_METHOD(0x01B74D50, bool, ToggleField, app::NavigableOnGUI* this_ptr, app::String* label, bool value)
    IL2CPP_REGISTER_METHOD(0x01B74EA0, float, SliderField_1, app::NavigableOnGUI* this_ptr, app::String* label, float value, float min, float max)
    IL2CPP_REGISTER_METHOD(0x01B750B0, int32_t, SliderField_2, app::NavigableOnGUI* this_ptr, app::String* label, int32_t value, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x01B752A0, float, FloatField, app::NavigableOnGUI* this_ptr, app::String* label, float value)
    IL2CPP_REGISTER_METHOD(0x01B75400, int32_t, IntField, app::NavigableOnGUI* this_ptr, app::String* label, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01B75540, void, LabelField, app::NavigableOnGUI* this_ptr, app::String* label, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01B75640, void, cctor, )
} // namespace app::classes::Moon::UberStateVisualization::NavigableOnGUI
