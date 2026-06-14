#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerConfigurableJoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerConfigurableJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigurableJoint_DEFINED)
#include <Modloader/app/structs/ServerConfigurableJoint__Fields.h>
#if defined(IL2CPP_STRUCT_ServerConfigurableJoint__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerConfigurableJoint_DEFINED
struct ServerConfigurableJoint__Class;
struct ServerConfigurableJoint {
    struct ServerConfigurableJoint__Class* klass;
    MonitorData* monitor;
    struct ServerConfigurableJoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerConfigurableJoint_FWDDECL)
#define IL2CPP_STRUCT_ServerConfigurableJoint_FWDDECL
#include <Modloader/app/structs/ServerConfigurableJoint__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerConfigurableJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigurableJoint_DEFINED) && !defined(IL2CPP_STRUCT_ServerConfigurableJoint_FWDDECL)
#include <Modloader/app/structs/ServerConfigurableJoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerConfigurableJoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
