#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayeredRenderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayeredRenderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredRenderSettings__Fields_DEFINED)
#include <Modloader/app/structs/LayeredRenderSettings_LayeredRenderSettingsOverride.h>
#include <Modloader/app/structs/LayeredRenderSettings_UsageType__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayeredRenderSettings_UsageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayeredRenderSettings_LayeredRenderSettingsOverride_DEFINED)
#define IL2CPP_STRUCT_LayeredRenderSettings__Fields_DEFINED
struct LayeredRenderSettings_LayerParams__Array;
struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride_;
struct LayeredRenderSettings__Fields {
    struct ScriptableObject__Fields _;
    bool ShowLayers;
    LayeredRenderSettings_UsageType__Enum Type;

    struct LayeredRenderSettings_LayerParams__Array* m_layers;
    float m_farPlane;
    struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* Overrides;
    bool m_overrideEvaluated;
    bool m_useOverride;
    bool m_forceSwitchOverrideLocal;
    struct LayeredRenderSettings_LayeredRenderSettingsOverride m_currentOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayeredRenderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_LayeredRenderSettings__Fields_FWDDECL
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array.h>
#include <Modloader/app/structs/List_1_LayeredRenderSettings_LayeredRenderSettingsOverride_.h>
#endif
#undef IL2CPP_STRUCT_LayeredRenderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredRenderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LayeredRenderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/LayeredRenderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayeredRenderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
