#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerRigidbody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerRigidbody_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerRigidbody_DEFINED)
#include <Modloader/app/structs/ServerRigidbody__Fields.h>
#if defined(IL2CPP_STRUCT_ServerRigidbody__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerRigidbody_DEFINED
struct ServerRigidbody__Class;
struct ServerRigidbody {
    struct ServerRigidbody__Class* klass;
    MonitorData* monitor;
    struct ServerRigidbody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerRigidbody_FWDDECL)
#define IL2CPP_STRUCT_ServerRigidbody_FWDDECL
#include <Modloader/app/structs/ServerRigidbody__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerRigidbody_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerRigidbody_DEFINED) && !defined(IL2CPP_STRUCT_ServerRigidbody_FWDDECL)
#include <Modloader/app/structs/ServerRigidbody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerRigidbody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
