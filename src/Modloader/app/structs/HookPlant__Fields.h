#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HookPlant__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HookPlant__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HookPlant__Fields_DEFINED)
#include <Modloader/app/structs/HookPlant_State__Enum.h>
#include <Modloader/app/structs/LegacySpiritLeashHook__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_HookPlant_State__Enum_DEFINED)
#define IL2CPP_STRUCT_HookPlant__Fields_DEFINED
struct MoonAnimator;
struct MoonTimeline;
struct FloatAnimationParameter;
struct SeinSpiritLeashAbility;
struct Transform;
struct HookPlant__Fields {
    struct LegacySpiritLeashHook__Fields _;
    struct MoonAnimator* Animator;
    float ClosedRadius;
    float OpenedRadius;
    struct MoonTimeline* OpenTransitionTimeline;
    struct MoonTimeline* CloseTransitionTimeline;
    struct MoonTimeline* OpenedTimeline;
    struct MoonTimeline* ClosedTimeline;
    struct FloatAnimationParameter* OpenAngle;
    struct Vector3 m_leashPos;
    float LeashCooldownTime;
    float m_leashTimeout;
    HookPlant_State__Enum m_currentState;

    struct MoonTimeline* m_currentTimeline;
    struct SeinSpiritLeashAbility* m_leash;
    struct Transform* HookTarget;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HookPlant__Fields_FWDDECL)
#define IL2CPP_STRUCT_HookPlant__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HookPlant__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HookPlant__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HookPlant__Fields_FWDDECL)
#include <Modloader/app/structs/HookPlant__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HookPlant__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
