#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_DEFINED
struct AnimationCurve;
struct CameraPuppetController;
struct WideScreenAdjustmentSettings;
struct FloatProviderZone__Array;
struct Transform;
struct GameplayToCinematicAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* AnimationCurve;
    struct CameraPuppetController* m_puppet;
    struct WideScreenAdjustmentSettings* WideScreenAdjustment;
    struct FloatProviderZone__Array* AnimationZones;
    struct Transform* StartingPuppetLocation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CameraPuppetController.h>
#include <Modloader/app/structs/FloatProviderZone__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WideScreenAdjustmentSettings.h>
#endif
#undef IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameplayToCinematicAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/GameplayToCinematicAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplayToCinematicAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
