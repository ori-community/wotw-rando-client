#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/SeinRide_RideState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SeinRide_RideState__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_DEFINED
struct MoonAnimationAssociation;
struct MoonAnimation;
struct AnimationCurve;
struct KuState;
struct SeinRide_KuRidingState__Fields {
    struct SeinRide_RideState__Fields _;
    struct MoonAnimationAssociation* AnimationsMatch;
    struct MoonAnimation* MountFront;
    struct MoonAnimation* MountBack;
    struct AnimationCurve* MountCurve;
    struct ActiveAnimationHandle m_activeAnimation;
    struct ActiveAnimationHandle m_sourceActiveAnimation;
    struct KuState* m_previusState;
    bool m_isMounting;
    bool m_hadFeatherFlap;
    float m_mountDuration;
    float m_mountTimer;
    struct Vector3 m_originalPos;
    struct MoonAnimation* m_ignoreNextStop;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/KuState.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimationAssociation.h>
#endif
#undef IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinRide_KuRidingState__Fields_FWDDECL)
#include <Modloader/app/structs/SeinRide_KuRidingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRide_KuRidingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
