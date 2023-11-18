#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_DEFINED
struct MoonVector3;
struct MoonBool;
struct MoonFloat;
struct PlayerInsideZoneChecker;
struct GroundEntityLocomotion;
struct ILocomotionTurningHandler;
struct GroundChaseBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3* TargetPosition;
    float OvershootDistance;
    struct MoonBool* UsePredictedOriPosition;
    struct MoonBool* ClampPredictedPosition;
    struct MoonFloat* TraversalSpeed;
    struct MoonFloat* NearTargetTraversalSpeed;
    struct MoonBool* LookAtTargetAfterArrive;
    struct PlayerInsideZoneChecker* ArriveAtTargetZone;
    float TimeInsideZoneToSucceed;
    struct GroundEntityLocomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    float m_timer;
    struct Rect m_nearTargetZone;
    float _ChasingTime_k__BackingField;
    bool m_reevalutatePosition;
    struct Vector3 m_cachedTargetPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/GroundChaseBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundChaseBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
