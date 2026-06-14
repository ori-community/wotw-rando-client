#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlyMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlyMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlyMovement__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_FlyMovement__Fields_DEFINED
struct Kickback;
struct Rigidbody;
struct FlyMovement__Fields {
    struct SaveSerialize__Fields _;
    struct Kickback* Kickback;
    bool HasKickback;
    struct Vector2 Velocity;
    struct Rigidbody* m_rigidbody;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlyMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlyMovement__Fields_FWDDECL
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_FlyMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlyMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlyMovement__Fields_FWDDECL)
#include <Modloader/app/structs/FlyMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlyMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
