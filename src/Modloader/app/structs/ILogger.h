#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILogger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILogger_DEFINED)
#define IL2CPP_STRUCT_ILogger_DEFINED
struct ILogger__Class;
struct ILogger {
    struct ILogger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILogger_FWDDECL)
#define IL2CPP_STRUCT_ILogger_FWDDECL
#include <Modloader/app/structs/ILogger__Class.h>
#endif
#undef IL2CPP_STRUCT_ILogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILogger_DEFINED) && !defined(IL2CPP_STRUCT_ILogger_FWDDECL)
#include <Modloader/app/structs/ILogger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILogger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
