#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerMeshCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerMeshCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerMeshCollider_DEFINED)
#include <Modloader/app/structs/ServerMeshCollider__Fields.h>
#if defined(IL2CPP_STRUCT_ServerMeshCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerMeshCollider_DEFINED
struct ServerMeshCollider__Class;
struct ServerMeshCollider {
    struct ServerMeshCollider__Class* klass;
    MonitorData* monitor;
    struct ServerMeshCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerMeshCollider_FWDDECL)
#define IL2CPP_STRUCT_ServerMeshCollider_FWDDECL
#include <Modloader/app/structs/ServerMeshCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerMeshCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerMeshCollider_DEFINED) && !defined(IL2CPP_STRUCT_ServerMeshCollider_FWDDECL)
#include <Modloader/app/structs/ServerMeshCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerMeshCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
