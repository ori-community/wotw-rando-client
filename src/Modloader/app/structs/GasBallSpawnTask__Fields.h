#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasBallSpawnTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasBallSpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasBallSpawnTask__Fields_DEFINED)
#include <Modloader/app/structs/CommonSpawnTask__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CommonSpawnTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GasBallSpawnTask__Fields_DEFINED
struct FloatAnimationParameter;
struct EventTriggerAnimator;
struct MoonVector3;
struct Condition_1;
struct Transform;
struct GasballEntity;
struct PlatformMovement;
struct GasBallSpawnTask__Fields {
    struct CommonSpawnTask__Fields _;
    struct FloatAnimationParameter* LookDirectionAnimParam;
    float BlendParamChangeSpeed;
    float MoveSpeed;
    float SlowDownDistance;
    struct EventTriggerAnimator* StartMovingEvent;
    struct MoonVector3* TargetPosition;
    float TraversalSpeed;
    float PositionOffset;
    bool EndEarlyOnCondition;
    struct Condition_1* Condition;
    struct Transform* m_mirror;
    float m_currentBlend;
    struct Vector3 m_targetPosition;
    struct GasballEntity* m_gasball;
    struct PlatformMovement* m_platformMovement;
    struct Vector3 m_moveDirection;
    float m_slowDownDistanceSqr;
    bool m_canBeInterrupted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasBallSpawnTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasBallSpawnTask__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GasballEntity.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GasBallSpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasBallSpawnTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasBallSpawnTask__Fields_FWDDECL)
#include <Modloader/app/structs/GasBallSpawnTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasBallSpawnTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
