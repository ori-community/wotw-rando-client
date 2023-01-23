#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemInfo_DEFINED)
#define IL2CPP_STRUCT_SystemInfo_DEFINED
struct SystemInfo__Class;
struct SystemInfo {
    struct SystemInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SystemInfo_FWDDECL)
#define IL2CPP_STRUCT_SystemInfo_FWDDECL
#include <Modloader/app/structs/SystemInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SystemInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemInfo_DEFINED) && !defined(IL2CPP_STRUCT_SystemInfo_FWDDECL)
#include <Modloader/app/structs/SystemInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
