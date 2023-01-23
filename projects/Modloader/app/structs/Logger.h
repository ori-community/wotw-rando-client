#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Logger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Logger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Logger_DEFINED)
#include <Modloader/app/structs/Logger__Fields.h>
#if defined(IL2CPP_STRUCT_Logger__Fields_DEFINED)
#define IL2CPP_STRUCT_Logger_DEFINED
struct Logger__Class;
struct Logger {
    struct Logger__Class* klass;
    MonitorData* monitor;
    struct Logger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Logger_FWDDECL)
#define IL2CPP_STRUCT_Logger_FWDDECL
#include <Modloader/app/structs/Logger__Class.h>
#endif
#undef IL2CPP_STRUCT_Logger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Logger_DEFINED) && !defined(IL2CPP_STRUCT_Logger_FWDDECL)
#include <Modloader/app/structs/Logger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Logger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
