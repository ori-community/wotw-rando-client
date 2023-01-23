#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SpiritLightAffectorBasedTrigger_State__Enum.h>
#include <Modloader/app/structs/SpiritLightType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritLightType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_DEFINED
struct LocalSpacePointSet;
struct ActionMethod;
struct SpiritLightAffectorBasedTrigger__Fields {
    struct MonoBehaviour__Fields _;
    float RadiusModulation;
    SpiritLightType__Enum LightType;

    struct LocalSpacePointSet* TriggerPoints;
    struct ActionMethod* AllPointsCoveredInLightAction;
    struct ActionMethod* NoPointsCoveredInLightAction;
    struct ActionMethod* SomePointsCoveredInLightAction;
    struct ActionMethod* FirstPointCoveredInLightAction;
    bool AssumeAllPointsCoveredIfDarknessIsLifted;
    bool InvertedTrigger;
    SpiritLightAffectorBasedTrigger_State__Enum m_currentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/LocalSpacePointSet.h>
#endif
#undef IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLightAffectorBasedTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLightAffectorBasedTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLightAffectorBasedTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
