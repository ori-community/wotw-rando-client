#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundChaseBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_GroundChaseBehaviour__Fields_DEFINED
struct PlayerInsideZoneChecker;
struct IEntityLocomotion;
struct ILocomotionTurningHandler;
struct GroundChaseBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    bool _UsePredictedOriPosition_k__BackingField;
    bool _ClampPredictedPosition_k__BackingField;
    float _TraversalSpeed_k__BackingField;
    float _NearTargetTraversalSpeed_k__BackingField;
    bool _LookAtTargetAfterArrive_k__BackingField;
    struct PlayerInsideZoneChecker* ArriveAtTargetZone;
    float TimeInsideZoneToSucceed;
    struct IEntityLocomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    float m_timer;
    struct Rect m_nearTargetZone;
    float _ChasingTime_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundChaseBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_GroundChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundChaseBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GroundChaseBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundChaseBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
