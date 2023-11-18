#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NavigableOnGUI_1.h>
#include <Modloader/app/structs/ClearFlagMode__Enum.h>
#include <Modloader/app/structs/ClearPolicy__Enum.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/FullScreenMode__Enum.h>
#include <Modloader/app/structs/GUILayoutOption__Array.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_ClearSceneRT__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_ClearSliceBlurRT__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DebugDownsample__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DeferredLightingDebug__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DofBlurType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FXAADepthPrecull__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FXAAHiRes__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FrameBufferDepth__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FrameBufferFormat__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FxaaQualityLevel__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_GodRaySampleCount__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_HDRRecMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_MaskErasingFixType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_POT__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_RenderQueues__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_SliceCompositionType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_TLCCulling__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_TLCLightingDebug__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_TLCLighting__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_WaterReflectionSortMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_XboxResolution__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_MSAA__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_QualityForInspector__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_SliceRangeMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_TextureQuality__Enum.h>
#include <Modloader/app/structs/NavigableOnGUI_Field_1.h>
#include <Modloader/app/structs/NavigableOnGUI_Tracker_1.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/SceneRTAllocationPolicy__Enum.h>
#include <Modloader/app/structs/SliceRTAllocationPolicy__Enum.h>
#include <Modloader/app/structs/SortFlags__Enum.h>
#include <Modloader/app/structs/SrpSampler_Scope__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::NavigableOnGUI {
    IL2CPP_REGISTER_METHOD(0x00887DE0, bool, get_isSelected, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00887E00, void, UpdateInput, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00888080, void, ClearInput, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008880A0, void, BeginOnGUI, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008880C0, void, EndOnGUI, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008880E0, void, BeginControl, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00888320, void, EndControl, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00888580, bool, Button, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x00888690, bool, Toggle, (app::NavigableOnGUI_1 * this_ptr, bool value, app::String* label, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x00888860, bool, Foldout, (app::NavigableOnGUI_1 * this_ptr, bool value, app::String* label, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x00888A60, float, HorizontalSlider, (app::NavigableOnGUI_1 * this_ptr, float value, float min, float max, float min_step, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x00888D40, float, FloatInput, (app::NavigableOnGUI_1 * this_ptr, float value, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x00888E60, int32_t, IntInput, (app::NavigableOnGUI_1 * this_ptr, int32_t value, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x00888EE0, void, BeginField, (app::NavigableOnGUI_1 * this_ptr, app::String* label))
    IL2CPP_REGISTER_METHOD(0x008890B0, void, EndField, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008891A0, app::NavigableOnGUI_Field_1, GetField, (app::NavigableOnGUI_1 * this_ptr, app::String* label))
    IL2CPP_REGISTER_METHOD(0x008891D0, bool, ButtonField, (app::NavigableOnGUI_1 * this_ptr, app::String* label))
    IL2CPP_REGISTER_METHOD(0x00889330, bool, FoldoutField, (app::NavigableOnGUI_1 * this_ptr, app::String* label, bool value))
    IL2CPP_REGISTER_METHOD(0x00889480, bool, ToggleField, (app::NavigableOnGUI_1 * this_ptr, app::String* label, bool value))
    IL2CPP_REGISTER_METHOD(0x008895D0, float, SliderField_1, (app::NavigableOnGUI_1 * this_ptr, app::String* label, float value, float min, float max))
    IL2CPP_REGISTER_METHOD(0x008897F0, int32_t, SliderField_2, (app::NavigableOnGUI_1 * this_ptr, app::String* label, int32_t value, int32_t min, int32_t max))
    IL2CPP_REGISTER_METHOD(0x008899F0, float, FloatField, (app::NavigableOnGUI_1 * this_ptr, app::String* label, float value))
    IL2CPP_REGISTER_METHOD(0x00889B50, int32_t, IntField, (app::NavigableOnGUI_1 * this_ptr, app::String* label, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00889C90, void, LabelField, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00889D90, void, ctor, (app::NavigableOnGUI_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00889DB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0088A110, void, _UpdateInput_g__updateTracker_16_0, (app::NavigableOnGUI_1 * this_ptr, app::NavigableOnGUI_Tracker_1* tracker, app::Input_InputButtonProcessor* decrement_button, app::Input_InputButtonProcessor* increment_button, bool update_changing_value))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_FXAADepthPrecull__Enum, EnumField_1, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_FXAADepthPrecull__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum, EnumField_2, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_FXAAHiRes__Enum, EnumField_3, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_FXAAHiRes__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_TLCCulling__Enum, EnumField_4, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_TLCCulling__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_TLCLighting__Enum, EnumField_5, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_TLCLighting__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_TLCLightingDebug__Enum, EnumField_6, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_TLCLightingDebug__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_FxaaQualityLevel__Enum, EnumField_7, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_FxaaQualityLevel__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::SrpSampler_Scope__Enum, EnumField_8, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::SrpSampler_Scope__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineDebugUI_QualityForInspector__Enum, EnumField_9, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineDebugUI_QualityForInspector__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum, EnumField_10, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_WaterReflectionSortMode__Enum, EnumField_11, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_WaterReflectionSortMode__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_DofBlurType__Enum, EnumField_12, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_DofBlurType__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_SliceCompositionType__Enum, EnumField_13, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_SliceCompositionType__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineDebugUI_TextureQuality__Enum, EnumField_14, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineDebugUI_TextureQuality__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::SceneRTAllocationPolicy__Enum, EnumField_15, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::SceneRTAllocationPolicy__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::SliceRTAllocationPolicy__Enum, EnumField_16, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::SliceRTAllocationPolicy__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_FrameBufferFormat__Enum, EnumField_17, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_FrameBufferFormat__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::RenderTextureFormat__Enum, EnumField_18, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::RenderTextureFormat__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_FrameBufferDepth__Enum, EnumField_19, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_FrameBufferDepth__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_XboxResolution__Enum, EnumField_20, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_XboxResolution__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_DebugDownsample__Enum, EnumField_21, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_DebugDownsample__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::ClearPolicy__Enum, EnumField_22, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::ClearPolicy__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::ClearFlagMode__Enum, EnumField_23, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::ClearFlagMode__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_ClearSceneRT__Enum, EnumField_24, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_ClearSceneRT__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_ClearSliceBlurRT__Enum, EnumField_25, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_ClearSliceBlurRT__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineDebugUI_MSAA__Enum, EnumField_26, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineDebugUI_MSAA__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::FilterMode__Enum, EnumField_27, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::FilterMode__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_HDRRecMode__Enum, EnumField_28, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_HDRRecMode__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_MaskErasingFixType__Enum, EnumField_29, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_MaskErasingFixType__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_POT__Enum, EnumField_30, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_POT__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum, EnumField_31, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_RenderQueues__Enum, EnumField_32, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_RenderQueues__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::SortFlags__Enum, EnumField_33, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::SortFlags__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::MoonRenderPipelineAsset_GodRaySampleCount__Enum, EnumField_34, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::MoonRenderPipelineAsset_GodRaySampleCount__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::FullScreenMode__Enum, EnumField_35, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::FullScreenMode__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F2E0, app::Int32Enum__Enum, EnumControl, (app::NavigableOnGUI_1 * this_ptr, app::Int32Enum__Enum value, bool slider_mode))
    IL2CPP_REGISTER_METHOD(0x0157F8C0, app::Int32Enum__Enum, EnumField_36, (app::NavigableOnGUI_1 * this_ptr, app::String* label, app::Int32Enum__Enum value, bool slider_mode))
} // namespace app::classes::NavigableOnGUI
