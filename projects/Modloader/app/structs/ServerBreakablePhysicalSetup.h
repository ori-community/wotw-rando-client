#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerBreakablePhysicalSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerBreakablePhysicalSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup_DEFINED)
#include <Modloader/app/structs/ServerBreakablePhysicalSetup__Fields.h>
#if defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerBreakablePhysicalSetup_DEFINED
struct ServerBreakablePhysicalSetup__Class;
struct ServerBreakablePhysicalSetup {
    struct ServerBreakablePhysicalSetup__Class* klass;
    MonitorData* monitor;
    struct ServerBreakablePhysicalSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup_FWDDECL)
#define IL2CPP_STRUCT_ServerBreakablePhysicalSetup_FWDDECL
#include <Modloader/app/structs/ServerBreakablePhysicalSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerBreakablePhysicalSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup_DEFINED) && !defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup_FWDDECL)
#include <Modloader/app/structs/ServerBreakablePhysicalSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerBreakablePhysicalSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
