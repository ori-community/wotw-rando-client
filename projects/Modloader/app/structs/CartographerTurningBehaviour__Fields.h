#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_DEFINED
struct GroundEntityLocomotion;
struct MoonTimeline;
struct CartographerEntity;
struct AnimationPlayer;
struct CartographerTurningBehaviour__Fields {
    struct BaseLocomotionTurningBehaviour__Fields _;
    float m_targetLookDirectionX;
    struct GroundEntityLocomotion* m_groundLocomotion;
    struct MoonTimeline* RightToLeft;
    struct MoonTimeline* LeftToRight;
    struct CartographerEntity* m_cartographerEntity;
    struct MoonTimeline* m_currentTimeline;
    struct AnimationPlayer* m_currentTimelineAnimation;
    bool m_shouldEnd;
    float m_currentTurningDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/CartographerEntity.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartographerTurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/CartographerTurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerTurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
