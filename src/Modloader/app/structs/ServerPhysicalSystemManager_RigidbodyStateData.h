#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_DEFINED)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_DEFINED
struct Vector3Ser;
struct Vector4Ser;
struct ServerPhysicalSystemManager_RigidbodyStateData {
    int32_t RigidbodyID;
    struct Vector3Ser* AngularVelocity;
    struct Vector3Ser* Velocity;
    struct Vector3Ser* OriginalPosition;
    struct Vector4Ser* OriginalRotation;
    bool WasDisabled;
    struct Vector3Ser* LastPosition;
    struct Vector4Ser* LastRotation;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_FWDDECL)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_FWDDECL
#include <Modloader/app/structs/Vector3Ser.h>
#include <Modloader/app/structs/Vector4Ser.h>
#endif
#undef IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_DEFINED) && !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_RigidbodyStateData_FWDDECL)
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
