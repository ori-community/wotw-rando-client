#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_DEFINED)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_DEFINED
enum class GhostGenericEventsPlugin_Data_ActionType__Enum : uint8_t {
    PerformEvent = 0x00,
    PerformAnimationEvent = 0x01,
    PerformSoundEvent = 0x02,
    PerformFadeOutSoundEvent = 0x03,
    SetPredicate = 0x04,
    SetFloat = 0x05,
    SetInt = 0x06,
    SetBool = 0x07,
    PerformInstantiate = 0x08,
    SetTransform = 0x09,
    BeginInteraction = 0x0a,
    EndInteraction = 0x0b,
    SetLocalTransform = 0x0c,
    EndAnimationEvent = 0x0d,
    GenericInstantiate = 0x0e,
    SetAnimationParamEvent = 0x0f,
    PlayAnimationMontage = 0x10,
    LegacyAnimationStartEvent = 0x11,
    AnimationEndEvent = 0x12,
    TimelineStartEvent = 0x13,
    TimelineEndEvent = 0x14,
    ScenarioAnimatingParticleSystem = 0x15,
    AnimationStartEvent = 0x16,
};
#endif
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_FWDDECL)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_FWDDECL)
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data_ActionType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data_ActionType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
