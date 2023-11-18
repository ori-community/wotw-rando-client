#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_DEFINED
struct SceneDefaultSettingsHelper;
struct List_1_IBrigthnessContributionAgent_;
struct GlobalBrightnessController__StaticFields {
    float LightsGlobalDarkeningMultiplier;
    float LightsGlobalDarkeningOffset;
    float _GlobalBrightness_k__BackingField;
    float _GlobalBrightnessDebugOverride_k__BackingField;
    struct SceneDefaultSettingsHelper* s_helper;
    struct List_1_IBrigthnessContributionAgent_* s_contributions;
    bool s_listeningToSceneChangedEvents;
};
#endif
#if !defined(IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_IBrigthnessContributionAgent_.h>
#include <Modloader/app/structs/SceneDefaultSettingsHelper.h>
#endif
#undef IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GlobalBrightnessController__StaticFields_FWDDECL)
#include <Modloader/app/structs/GlobalBrightnessController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalBrightnessController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
