#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsTypeCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsTypeCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsTypeCache_DEFINED)
#define IL2CPP_STRUCT_fsTypeCache_DEFINED
struct fsTypeCache__Class;
struct fsTypeCache {
    struct fsTypeCache__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsTypeCache_FWDDECL)
#define IL2CPP_STRUCT_fsTypeCache_FWDDECL
#include <Modloader/app/structs/fsTypeCache__Class.h>
#endif
#undef IL2CPP_STRUCT_fsTypeCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsTypeCache_DEFINED) && !defined(IL2CPP_STRUCT_fsTypeCache_FWDDECL)
#include <Modloader/app/structs/fsTypeCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsTypeCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
