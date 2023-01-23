#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RollingMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RollingMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RollingMovement__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RollingMovement__Fields_DEFINED
struct Rigidbody;
struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_;
struct IsOnCollisionState;
struct RollingMovement__Fields {
    struct SaveSerialize__Fields _;
    struct Rigidbody* m_rigidbody;
    struct Vector3 Speed;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* OnCollisionGroundEvent;
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* OnCollisionWallLeftEvent;
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* OnCollisionWallRightEvent;
    struct Vector3 m_groundNormal;
    struct Vector3 GroundNormal;
    bool IsOnGround;
    struct IsOnCollisionState* WallLeft;
    struct IsOnCollisionState* WallRight;
    struct IsOnCollisionState* Ground;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RollingMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_RollingMovement__Fields_FWDDECL
#include <Modloader/app/structs/Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_.h>
#include <Modloader/app/structs/IsOnCollisionState.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_RollingMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RollingMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RollingMovement__Fields_FWDDECL)
#include <Modloader/app/structs/RollingMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RollingMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
