#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrailPathProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrailPathProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailPathProvider_DEFINED)
#define IL2CPP_STRUCT_TrailPathProvider_DEFINED
struct TrailPathProvider__Class;
struct TrailPathProvider {
    struct TrailPathProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TrailPathProvider_FWDDECL)
#define IL2CPP_STRUCT_TrailPathProvider_FWDDECL
#include <Modloader/app/structs/TrailPathProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_TrailPathProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailPathProvider_DEFINED) && !defined(IL2CPP_STRUCT_TrailPathProvider_FWDDECL)
#include <Modloader/app/structs/TrailPathProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrailPathProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
