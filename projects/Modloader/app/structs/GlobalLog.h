#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalLog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalLog_DEFINED)
#define IL2CPP_STRUCT_GlobalLog_DEFINED
struct GlobalLog__Class;
struct GlobalLog {
    struct GlobalLog__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GlobalLog_FWDDECL)
#define IL2CPP_STRUCT_GlobalLog_FWDDECL
#include <Modloader/app/structs/GlobalLog__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalLog_DEFINED) && !defined(IL2CPP_STRUCT_GlobalLog_FWDDECL)
#include <Modloader/app/structs/GlobalLog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalLog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
