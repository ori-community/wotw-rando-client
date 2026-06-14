#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TempBrigthnessContributionAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TempBrigthnessContributionAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_TempBrigthnessContributionAgent_DEFINED)
#include <Modloader/app/structs/GlobalBrightnessController_BrigthnessContributionOrder__Enum.h>
#if defined(IL2CPP_STRUCT_GlobalBrightnessController_BrigthnessContributionOrder__Enum_DEFINED)
#define IL2CPP_STRUCT_TempBrigthnessContributionAgent_DEFINED
struct WeightController;
struct TempBrigthnessContributionAgent {
    GlobalBrightnessController_BrigthnessContributionOrder__Enum _BrightnessInfluceOrder_k__BackingField;

    float _BrightnessInfluceAdditive_k__BackingField;
    float _BrightnessInfluceMultiplicative_k__BackingField;
    bool _ContributeToAdditive_k__BackingField;
    bool _ContributeToMultiplicative_k__BackingField;
    struct WeightController* m_fadeController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TempBrigthnessContributionAgent_FWDDECL)
#define IL2CPP_STRUCT_TempBrigthnessContributionAgent_FWDDECL
#include <Modloader/app/structs/WeightController.h>
#endif
#undef IL2CPP_STRUCT_TempBrigthnessContributionAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_TempBrigthnessContributionAgent_DEFINED) && !defined(IL2CPP_STRUCT_TempBrigthnessContributionAgent_FWDDECL)
#include <Modloader/app/structs/TempBrigthnessContributionAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TempBrigthnessContributionAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
