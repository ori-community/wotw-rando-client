#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/SandWormAnimationPlayer_StopBehaviourType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SandWormAnimationPlayer_StopBehaviourType__Enum_DEFINED)
#define IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_DEFINED
struct SandWormEntity;
struct SandWormEntity_SandWormBodyAnimation;
struct SandWormAnimationPlayer__Fields {
    struct TimelineEntity__Fields _;
    SandWormAnimationPlayer_StopBehaviourType__Enum StopBehaviour;

    struct SandWormEntity* SandWorm;
    struct SandWormEntity_SandWormBodyAnimation* Animation;
    int32_t Priority;
    float Speed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation.h>
#endif
#undef IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormAnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormAnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormAnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
