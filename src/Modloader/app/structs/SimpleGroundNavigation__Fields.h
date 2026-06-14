#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleGroundNavigation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleGroundNavigation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleGroundNavigation__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SimpleGroundNavigation__Fields_DEFINED
struct GroundEntityLocomotion;
struct SimpleGroundNavigation__Fields {
    struct MonoBehaviour__Fields _;
    struct GroundEntityLocomotion* Locomotion;
    float sphereRadius;
    float arriveDistance;
    float maxJumpHeight;
    float minJumpHeight;
    float maxJumpDistance;
    float minJumpDistance;
    float jumpTryStepDistance;
    float avoidEdgeDistance;
    float maxFloorDistance;
    float maxCeilingDistance;
    float obstacleRayDistance;
    float ledgeRayOriginDistance;
    float obstacleNormalThreshold;
    float maxGroundProjectDistance;
    float runAwayTime;
    float timeSlice;
    struct Vector3 groundTarget;
    struct Vector3 moveVector;
    struct Vector3 nextMovePoint;
    bool directView;
    bool obstacleAhead;
    bool pitAhead;
    bool ceilingUp;
    bool underGround;
    bool abovePlatform;
    bool deadEnd;
    bool runningAway;
    bool canJump;
    float m_runningAway;
    float m_runSide;
    float m_timeout;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleGroundNavigation__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleGroundNavigation__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SimpleGroundNavigation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleGroundNavigation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleGroundNavigation__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleGroundNavigation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleGroundNavigation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
