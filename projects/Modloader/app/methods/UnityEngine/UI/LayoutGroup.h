#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LayoutGroup.h>
#include <Modloader/app/structs/RectOffset.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/List_1_UnityEngine_RectTransform_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/GridLayoutGroup_Corner__Enum.h>
#include <Modloader/app/structs/GridLayoutGroup_Axis__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/GridLayoutGroup_Constraint__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>

namespace app::classes::UnityEngine::UI::LayoutGroup {
    IL2CPP_REGISTER_METHOD(0x024CF7B0, void, ctor, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F22F90, app::RectOffset*, get_padding, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CFBD0, void, set_padding, (app::LayoutGroup * this_ptr, app::RectOffset* value))
    IL2CPP_REGISTER_METHOD(0x01F22020, app::TextAnchor__Enum, get_childAlignment, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CFCA0, void, set_childAlignment, (app::LayoutGroup * this_ptr, app::TextAnchor__Enum value))
    IL2CPP_REGISTER_METHOD(0x024CFD40, app::RectTransform*, get_rectTransform, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CFE10, app::List_1_UnityEngine_RectTransform_*, get_rectChildren, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024CFE20, void, CalculateLayoutInputHorizontal, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D0190, float, get_minWidth, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D01A0, float, get_preferredWidth, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D01B0, float, get_flexibleWidth, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D01C0, float, get_minHeight, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D01D0, float, get_preferredHeight, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D01E0, float, get_flexibleHeight, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, int32_t, get_layoutPriority, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D01F0, void, OnEnable, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D0200, void, OnDisable, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D01F0, void, OnDidApplyAnimationProperties, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D02B0, float, GetTotalMinSize, (app::LayoutGroup * this_ptr, int32_t axis))
    IL2CPP_REGISTER_METHOD(0x024D02C0, float, GetTotalPreferredSize, (app::LayoutGroup * this_ptr, int32_t axis))
    IL2CPP_REGISTER_METHOD(0x024D02D0, float, GetTotalFlexibleSize, (app::LayoutGroup * this_ptr, int32_t axis))
    IL2CPP_REGISTER_METHOD(0x024D02E0, float, GetStartOffset, (app::LayoutGroup * this_ptr, int32_t axis, float required_space_without_padding))
    IL2CPP_REGISTER_METHOD(0x024D0560, float, GetAlignmentOnAxis, (app::LayoutGroup * this_ptr, int32_t axis))
    IL2CPP_REGISTER_METHOD(0x024D05B0, void, SetLayoutInputForAxis, (app::LayoutGroup * this_ptr, float total_min, float total_preferred, float total_flexible, int32_t axis))
    IL2CPP_REGISTER_METHOD(0x024D0610, void, SetChildAlongAxis_1, (app::LayoutGroup * this_ptr, app::RectTransform* rect, int32_t axis, float pos))
    IL2CPP_REGISTER_METHOD(0x024D0720, void, SetChildAlongAxis_2, (app::LayoutGroup * this_ptr, app::RectTransform* rect, int32_t axis, float pos, float size))
    IL2CPP_REGISTER_METHOD(0x024D0810, bool, get_isRootLayoutGroup, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D0A60, void, OnRectTransformDimensionsChange, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D01F0, void, OnTransformChildrenChanged, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D0A90, void, SetDirty, (app::LayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D0CD0, app::IEnumerator*, DelayedSetDirty, (app::LayoutGroup * this_ptr, app::RectTransform* rect_transform))
    IL2CPP_REGISTER_METHOD(0x015E69F0, void, SetProperty_1, (app::LayoutGroup * this_ptr, app::Object** current_value, app::Object* new_value))
    IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty_2, (app::LayoutGroup * this_ptr, app::GridLayoutGroup_Corner__Enum* current_value, app::GridLayoutGroup_Corner__Enum new_value))
    IL2CPP_REGISTER_METHODINFO(0x04704AC0, LayoutGroup_SetProperty_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty_3, (app::LayoutGroup * this_ptr, app::GridLayoutGroup_Axis__Enum* current_value, app::GridLayoutGroup_Axis__Enum new_value))
    IL2CPP_REGISTER_METHODINFO(0x04726E08, LayoutGroup_SetProperty_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6B00, void, SetProperty_4, (app::LayoutGroup * this_ptr, app::Vector2* current_value, app::Vector2 new_value))
    IL2CPP_REGISTER_METHODINFO(0x047591F8, LayoutGroup_SetProperty_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty_5, (app::LayoutGroup * this_ptr, app::GridLayoutGroup_Constraint__Enum* current_value, app::GridLayoutGroup_Constraint__Enum new_value))
    IL2CPP_REGISTER_METHODINFO(0x047336B8, LayoutGroup_SetProperty_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6890, void, SetProperty_6, (app::LayoutGroup * this_ptr, int32_t* current_value, int32_t new_value))
    IL2CPP_REGISTER_METHODINFO(0x0477A1D0, LayoutGroup_SetProperty_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6A70, void, SetProperty_7, (app::LayoutGroup * this_ptr, float* current_value, float new_value))
    IL2CPP_REGISTER_METHODINFO(0x0477CBE0, LayoutGroup_SetProperty_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6800, void, SetProperty_8, (app::LayoutGroup * this_ptr, bool* current_value, bool new_value))
    IL2CPP_REGISTER_METHODINFO(0x04793758, LayoutGroup_SetProperty_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E69F0, void, SetProperty_9, (app::LayoutGroup * this_ptr, app::RectOffset** current_value, app::RectOffset* new_value))
    IL2CPP_REGISTER_METHODINFO(0x04731F90, LayoutGroup_SetProperty_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty_10, (app::LayoutGroup * this_ptr, app::TextAnchor__Enum* current_value, app::TextAnchor__Enum new_value))
    IL2CPP_REGISTER_METHODINFO(0x047086E0, LayoutGroup_SetProperty_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty_11, (app::LayoutGroup * this_ptr, app::Int32Enum__Enum* current_value, app::Int32Enum__Enum new_value))
} // namespace app::classes::UnityEngine::UI::LayoutGroup
