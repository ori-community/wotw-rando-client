#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingServices_CACD_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingServices_CACD_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingServices_CACD_DEFINED)
#include <Modloader/app/structs/RemotingServices_CACD__Fields.h>
#if defined(IL2CPP_STRUCT_RemotingServices_CACD__Fields_DEFINED)
#define IL2CPP_STRUCT_RemotingServices_CACD_DEFINED
struct RemotingServices_CACD__Class;
struct RemotingServices_CACD {
    struct RemotingServices_CACD__Class* klass;
    MonitorData* monitor;
    struct RemotingServices_CACD__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemotingServices_CACD_FWDDECL)
#define IL2CPP_STRUCT_RemotingServices_CACD_FWDDECL
#include <Modloader/app/structs/RemotingServices_CACD__Class.h>
#endif
#undef IL2CPP_STRUCT_RemotingServices_CACD_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingServices_CACD_DEFINED) && !defined(IL2CPP_STRUCT_RemotingServices_CACD_FWDDECL)
#include <Modloader/app/structs/RemotingServices_CACD.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingServices_CACD.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
