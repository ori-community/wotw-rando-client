#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CinematicEntityAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CinematicEntityAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CinematicEntityAnimator__Fields_DEFINED)
#include <Modloader/app/structs/CinematicEntityAnimator_TargetModes__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_CinematicEntityAnimator_TargetModes__Enum_DEFINED)
#define IL2CPP_STRUCT_CinematicEntityAnimator__Fields_DEFINED
struct EntityPlaceholder;
struct Entity;
struct MoonReference_1_MoonAnimation_;
struct MoonAnimation;
struct CinematicEntityAnimator__Fields {
    struct TimelineEntity__Fields _;
    CinematicEntityAnimator_TargetModes__Enum Mode;

    struct EntityPlaceholder* Placeholder;
    struct Entity* Entity;
    struct MoonReference_1_MoonAnimation_* Animation;
    struct MoonAnimation* m_animation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CinematicEntityAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CinematicEntityAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityPlaceholder.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimation_.h>
#endif
#undef IL2CPP_STRUCT_CinematicEntityAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CinematicEntityAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CinematicEntityAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/CinematicEntityAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CinematicEntityAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
