#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_DEFINED)
#include <Modloader/app/structs/RigidbodyConstraints__Enum.h>
#if defined(IL2CPP_STRUCT_RigidbodyConstraints__Enum_DEFINED)
#define IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_DEFINED
struct ServerRigidbody_RigidbodyData {
    float Mass;
    float Drag;
    float AngularDrag;
    bool UseGravity;
    bool IsKinematic;
    RigidbodyConstraints__Enum Constraints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_FWDDECL)
#define IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_FWDDECL
#endif
#undef IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_DEFINED) && !defined(IL2CPP_STRUCT_ServerRigidbody_RigidbodyData_FWDDECL)
#include <Modloader/app/structs/ServerRigidbody_RigidbodyData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerRigidbody_RigidbodyData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
