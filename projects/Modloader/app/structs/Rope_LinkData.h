#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rope_LinkData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rope_LinkData_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rope_LinkData_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_Rope_LinkData_DEFINED
struct Rigidbody;
struct Transform;
struct Rope_LinkData {
    struct Vector3 AngularVelocity;
    struct Vector3 Position;
    struct Rigidbody* Rigidbody;
    struct Quaternion Rotation;
    struct Transform* Transform;
    struct Vector3 Velocity;
    struct Vector3 OriginalPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rope_LinkData_FWDDECL)
#define IL2CPP_STRUCT_Rope_LinkData_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Rope_LinkData_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rope_LinkData_DEFINED) && !defined(IL2CPP_STRUCT_Rope_LinkData_FWDDECL)
#include <Modloader/app/structs/Rope_LinkData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rope_LinkData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
