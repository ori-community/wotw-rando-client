#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CachedReflectionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CachedReflectionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedReflectionInfo_DEFINED)
#define IL2CPP_STRUCT_CachedReflectionInfo_DEFINED
struct CachedReflectionInfo__Class;
struct CachedReflectionInfo {
    struct CachedReflectionInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CachedReflectionInfo_FWDDECL)
#define IL2CPP_STRUCT_CachedReflectionInfo_FWDDECL
#include <Modloader/app/structs/CachedReflectionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CachedReflectionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedReflectionInfo_DEFINED) && !defined(IL2CPP_STRUCT_CachedReflectionInfo_FWDDECL)
#include <Modloader/app/structs/CachedReflectionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CachedReflectionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
