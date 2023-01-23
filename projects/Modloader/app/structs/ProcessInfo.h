#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProcessInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProcessInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessInfo_DEFINED)
#define IL2CPP_STRUCT_ProcessInfo_DEFINED
struct ProcessInfo__Class;
struct ProcessInfo {
    struct ProcessInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ProcessInfo_FWDDECL)
#define IL2CPP_STRUCT_ProcessInfo_FWDDECL
#include <Modloader/app/structs/ProcessInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ProcessInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessInfo_DEFINED) && !defined(IL2CPP_STRUCT_ProcessInfo_FWDDECL)
#include <Modloader/app/structs/ProcessInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProcessInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
