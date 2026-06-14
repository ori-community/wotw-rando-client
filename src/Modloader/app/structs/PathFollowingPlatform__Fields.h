#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathFollowingPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathFollowingPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollowingPlatform__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PathFollowingPlatform__Fields_DEFINED
struct SerializedFloatUberState;
struct Condition_1;
struct PlayerInsideZoneChecker;
struct VelocityBezierSplineComponent;
struct GameObject;
struct MoonTimeline;
struct DynamicDataResolver;
struct IUberState__Array;
struct PathFollowingPlatform__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedFloatUberState* NormalizedPositionOnSpline;
    struct Condition_1* PlatformMoveCondition;
    struct PlayerInsideZoneChecker* TriggerZone;
    struct VelocityBezierSplineComponent* PathSpline;
    struct GameObject* PlatformObject;
    struct MoonTimeline* ConditionTrueTimeline;
    struct MoonTimeline* ConditionFalseTimeline;
    struct DynamicDataResolver* m_dynamicDataResolver;
    float m_currentPlatformPosition;
    bool m_playerIsOnPlatform;
    bool m_conditionWasTrue;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathFollowingPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_PathFollowingPlatform__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#endif
#undef IL2CPP_STRUCT_PathFollowingPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollowingPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PathFollowingPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/PathFollowingPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathFollowingPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
