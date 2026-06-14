#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolatileDebugMenuLog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolatileDebugMenuLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog_DEFINED)
#include <Modloader/app/structs/VolatileDebugMenuLog__Fields.h>
#if defined(IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_DEFINED)
#define IL2CPP_STRUCT_VolatileDebugMenuLog_DEFINED
struct VolatileDebugMenuLog__Class;
struct VolatileDebugMenuLog {
    struct VolatileDebugMenuLog__Class* klass;
    MonitorData* monitor;
    struct VolatileDebugMenuLog__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog_FWDDECL)
#define IL2CPP_STRUCT_VolatileDebugMenuLog_FWDDECL
#include <Modloader/app/structs/VolatileDebugMenuLog__Class.h>
#endif
#undef IL2CPP_STRUCT_VolatileDebugMenuLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog_DEFINED) && !defined(IL2CPP_STRUCT_VolatileDebugMenuLog_FWDDECL)
#include <Modloader/app/structs/VolatileDebugMenuLog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolatileDebugMenuLog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
