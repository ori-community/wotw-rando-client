#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_DEFINED)
#include <Modloader/app/structs/PlayerInsideZoneChecker__Fields.h>
#include <Modloader/app/structs/ReadyForAnimationTrigger_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ReadyForAnimationTrigger_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_DEFINED
struct MoonAnimation;
struct AnimationCurve;
struct GameObject;
struct Condition_1;
struct ReadyForAnimationTrigger__Fields {
    struct PlayerInsideZoneChecker__Fields _;
    struct MoonAnimation* Animation;
    struct Vector3 Offset;
    struct AnimationCurve* SpeedByDistanceTraveledNormalized;
    float m_distance;
    float m_startDistance;
    ReadyForAnimationTrigger_State__Enum m_state;

    struct Vector3 m_initPos;
    struct GameObject* m_instance;
    struct Condition_1* ActiveCondition;
    bool OnlyTurnToDestination;
    bool ClampPositionToTarget;
    struct AnimationCurve* AnimationCurveX;
    struct AnimationCurve* AnimationCurveY;
    struct Vector3 m_destination;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReadyForAnimationTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/ReadyForAnimationTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadyForAnimationTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
