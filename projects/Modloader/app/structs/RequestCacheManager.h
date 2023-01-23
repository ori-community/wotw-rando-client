#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCacheManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCacheManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheManager_DEFINED)
#define IL2CPP_STRUCT_RequestCacheManager_DEFINED
struct RequestCacheManager__Class;
struct RequestCacheManager {
    struct RequestCacheManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RequestCacheManager_FWDDECL)
#define IL2CPP_STRUCT_RequestCacheManager_FWDDECL
#include <Modloader/app/structs/RequestCacheManager__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCacheManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheManager_DEFINED) && !defined(IL2CPP_STRUCT_RequestCacheManager_FWDDECL)
#include <Modloader/app/structs/RequestCacheManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCacheManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
