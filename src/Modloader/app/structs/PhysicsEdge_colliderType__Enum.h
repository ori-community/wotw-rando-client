#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_DEFINED)
#define IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_DEFINED
enum class PhysicsEdge_colliderType__Enum : int32_t {
    noCollider = 0x00000000,
    capsule = 0x00000001,
    plane = 0x00000002,
    box = 0x00000003,
    sphere = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_FWDDECL)
#define IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsEdge_colliderType__Enum_FWDDECL)
#include <Modloader/app/structs/PhysicsEdge_colliderType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsEdge_colliderType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
