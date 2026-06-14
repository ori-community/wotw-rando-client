#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceGroundMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceGroundMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceGroundMovement__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_TraceGroundMovement__Fields_DEFINED
struct Kickback;
struct Rigidbody;
struct MovingGroundHelper;
struct TraceGroundMovement__Fields {
    struct SaveSerialize__Fields _;
    struct Kickback* Kickback;
    float _Speed_k__BackingField;
    struct Vector3 m_floorNormal;
    struct Rigidbody* m_rigidbody;
    struct MovingGroundHelper* m_movingGround;
    SurfaceMaterialType__Enum Surface;

    struct Vector3 m_lastPosition;
    float m_lastAngle;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float CurrentAngularVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceGroundMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_TraceGroundMovement__Fields_FWDDECL
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/MovingGroundHelper.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_TraceGroundMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceGroundMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TraceGroundMovement__Fields_FWDDECL)
#include <Modloader/app/structs/TraceGroundMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceGroundMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
