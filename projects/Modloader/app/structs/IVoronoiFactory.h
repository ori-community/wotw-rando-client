#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVoronoiFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVoronoiFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVoronoiFactory_DEFINED)
#define IL2CPP_STRUCT_IVoronoiFactory_DEFINED
struct IVoronoiFactory__Class;
struct IVoronoiFactory {
    struct IVoronoiFactory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IVoronoiFactory_FWDDECL)
#define IL2CPP_STRUCT_IVoronoiFactory_FWDDECL
#include <Modloader/app/structs/IVoronoiFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_IVoronoiFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVoronoiFactory_DEFINED) && !defined(IL2CPP_STRUCT_IVoronoiFactory_FWDDECL)
#include <Modloader/app/structs/IVoronoiFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVoronoiFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
