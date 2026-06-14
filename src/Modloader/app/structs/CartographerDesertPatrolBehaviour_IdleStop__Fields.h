#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_DEFINED)
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum.h>
#if defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum_DEFINED)
#define IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_DEFINED
struct MoonTimeline;
struct MoonTimeline__Array;
struct MoonReference_1_UnityEngine_GameObject_;
struct GameObject;
struct __declspec(align(8)) CartographerDesertPatrolBehaviour_IdleStop__Fields {
    struct MoonTimeline* IdleLoopRight;
    struct MoonTimeline* IdleLoopLeft;
    struct MoonTimeline__Array* BreakupsRight;
    struct MoonTimeline__Array* BreakupsLeft;
    struct MoonReference_1_UnityEngine_GameObject_* PositionRightObject;
    struct MoonReference_1_UnityEngine_GameObject_* PositionLeftObject;
    bool StopsLeft;
    bool StopsRight;
    bool EndingStop;
    CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum StopName;

    float WaitTimeBeforeBreakup;
    float WaitTimeAfter;
    int32_t BreakupsToPlay;
    struct GameObject* m_left;
    struct GameObject* m_right;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#endif
#undef IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_IdleStop__Fields_FWDDECL)
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
