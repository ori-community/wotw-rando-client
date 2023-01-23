#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_DEFINED
struct DepthOfFieldController;
struct String;
struct Material;
struct LayeredRenderSettings;
struct Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_;
struct Dictionary_2_UnityEngine_GameObject_LayeredRenderSettings_;
struct LayeredRenderSettings_LayerParams__Array;
struct Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams_;
struct MoonRenderPipelineDebug_Slice__Array;
struct SlicedRenderSettingsEditor__Fields {
    struct MonoBehaviour__Fields _;
    bool m_hidden;
    struct DepthOfFieldController* m_dofController;
    struct String* m_dofControllerScene;
    struct Material* m_material;
    bool m_imguiRegistered;
    float m_scale;
    int32_t m_numberScale;
    float m_xOffset;
    float m_yOffset;
    float m_width;
    float m_height;
    float m_barWidth;
    float m_barMargin;
    float m_barMaxHeight;
    float m_barYOffset;
    int32_t m_lastScreenWidth;
    int32_t m_lastScreenHeight;
    int32_t m_selectedSliceIndex;
    int32_t m_selectedValueIndex;
    struct LayeredRenderSettings* m_settings;
    bool m_showOverride;
    struct Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* m_originalSliceSettings;
    struct Dictionary_2_UnityEngine_GameObject_LayeredRenderSettings_* m_originalLayerSettings;
    struct Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* m_overrideSettings;
    struct String* m_sceneSettingsScene;
    struct LayeredRenderSettings* m_sceneSettings;
    struct LayeredRenderSettings_LayerParams__Array* m_layerParams;
    struct Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams_* m_layerOverrides;
    bool m_canEdit;
    bool m_editDebugSlices;
    struct MoonRenderPipelineDebug_Slice__Array* m_debugSliceOriginal;
    struct MoonRenderPipelineDebug_Slice__Array* m_debugSliceOverride;
    float m_triggerHoldTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_FWDDECL)
#define IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_FWDDECL
#include <Modloader/app/structs/DepthOfFieldController.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_LayeredRenderSettings_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MoonRenderPipelineDebug_Slice__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SlicedRenderSettingsEditor__Fields_FWDDECL)
#include <Modloader/app/structs/SlicedRenderSettingsEditor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlicedRenderSettingsEditor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
