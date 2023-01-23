#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerSupport_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerSupport_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSupport_DEFINED)
#include <Modloader/app/structs/ServerSupport__Fields.h>
#if defined(IL2CPP_STRUCT_ServerSupport__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerSupport_DEFINED
struct ServerSupport__Class;
struct ServerSupport {
    struct ServerSupport__Class* klass;
    MonitorData* monitor;
    struct ServerSupport__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerSupport_FWDDECL)
#define IL2CPP_STRUCT_ServerSupport_FWDDECL
#include <Modloader/app/structs/ServerSupport__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerSupport_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSupport_DEFINED) && !defined(IL2CPP_STRUCT_ServerSupport_FWDDECL)
#include <Modloader/app/structs/ServerSupport.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerSupport.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
