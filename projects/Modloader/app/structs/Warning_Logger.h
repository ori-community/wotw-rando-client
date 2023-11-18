#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Warning_Logger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Warning_Logger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Warning_Logger_DEFINED)
#include <Modloader/app/structs/Warning_Logger__Fields.h>
#if defined(IL2CPP_STRUCT_Warning_Logger__Fields_DEFINED)
#define IL2CPP_STRUCT_Warning_Logger_DEFINED
struct Warning_Logger__Class;
struct Warning_Logger {
    struct Warning_Logger__Class* klass;
    MonitorData* monitor;
    struct Warning_Logger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Warning_Logger_FWDDECL)
#define IL2CPP_STRUCT_Warning_Logger_FWDDECL
#include <Modloader/app/structs/Warning_Logger__Class.h>
#endif
#undef IL2CPP_STRUCT_Warning_Logger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Warning_Logger_DEFINED) && !defined(IL2CPP_STRUCT_Warning_Logger_FWDDECL)
#include <Modloader/app/structs/Warning_Logger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Warning_Logger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
