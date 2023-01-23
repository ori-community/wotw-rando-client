#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerExplodingRigidbody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerExplodingRigidbody_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerExplodingRigidbody_DEFINED)
#include <Modloader/app/structs/ServerExplodingRigidbody__Fields.h>
#if defined(IL2CPP_STRUCT_ServerExplodingRigidbody__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerExplodingRigidbody_DEFINED
struct ServerExplodingRigidbody__Class;
struct ServerExplodingRigidbody {
    struct ServerExplodingRigidbody__Class* klass;
    MonitorData* monitor;
    struct ServerExplodingRigidbody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerExplodingRigidbody_FWDDECL)
#define IL2CPP_STRUCT_ServerExplodingRigidbody_FWDDECL
#include <Modloader/app/structs/ServerExplodingRigidbody__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerExplodingRigidbody_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerExplodingRigidbody_DEFINED) && !defined(IL2CPP_STRUCT_ServerExplodingRigidbody_FWDDECL)
#include <Modloader/app/structs/ServerExplodingRigidbody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerExplodingRigidbody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
