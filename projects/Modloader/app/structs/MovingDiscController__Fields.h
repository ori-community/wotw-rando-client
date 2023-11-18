#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingDiscController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingDiscController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingDiscController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MovingDiscController__Fields_DEFINED
struct SerializedFloatUberState;
struct Condition_1;
struct MoonTimeline;
struct VelocityBezierSplineComponent;
struct IUberState__Array;
struct MovingDiscController__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedFloatUberState* SavedDiscPositon;
    struct Condition_1* MoveCondition;
    struct MoonTimeline* ConditionTrueTimeline;
    struct MoonTimeline* ConditionFalseTimeline;
    float m_startingDiscPositionIfNoSerialization;
    struct VelocityBezierSplineComponent* PathSpline;
    float Acceleration;
    float FrictionCoefficient;
    float RollingGravity;
    float RollingRadius;
    float m_angularVelocity;
    float m_currentSpeed;
    bool m_playerOnSurface;
    bool m_previousShouldMove;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingDiscController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MovingDiscController__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#endif
#undef IL2CPP_STRUCT_MovingDiscController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingDiscController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MovingDiscController__Fields_FWDDECL)
#include <Modloader/app/structs/MovingDiscController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingDiscController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
