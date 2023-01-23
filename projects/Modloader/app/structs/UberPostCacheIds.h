#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostCacheIds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostCacheIds_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostCacheIds_DEFINED)
#define IL2CPP_STRUCT_UberPostCacheIds_DEFINED
struct UberPostCacheIds__Class;
struct UberPostCacheIds {
    struct UberPostCacheIds__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPostCacheIds_FWDDECL)
#define IL2CPP_STRUCT_UberPostCacheIds_FWDDECL
#include <Modloader/app/structs/UberPostCacheIds__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPostCacheIds_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostCacheIds_DEFINED) && !defined(IL2CPP_STRUCT_UberPostCacheIds_FWDDECL)
#include <Modloader/app/structs/UberPostCacheIds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostCacheIds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
