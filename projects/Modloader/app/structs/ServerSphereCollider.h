#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerSphereCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerSphereCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSphereCollider_DEFINED)
#include <Modloader/app/structs/ServerSphereCollider__Fields.h>
#if defined(IL2CPP_STRUCT_ServerSphereCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerSphereCollider_DEFINED
struct ServerSphereCollider__Class;
struct ServerSphereCollider {
    struct ServerSphereCollider__Class* klass;
    MonitorData* monitor;
    struct ServerSphereCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerSphereCollider_FWDDECL)
#define IL2CPP_STRUCT_ServerSphereCollider_FWDDECL
#include <Modloader/app/structs/ServerSphereCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerSphereCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSphereCollider_DEFINED) && !defined(IL2CPP_STRUCT_ServerSphereCollider_FWDDECL)
#include <Modloader/app/structs/ServerSphereCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerSphereCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
