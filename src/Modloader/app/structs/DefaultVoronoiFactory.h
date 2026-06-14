#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultVoronoiFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultVoronoiFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultVoronoiFactory_DEFINED)
#define IL2CPP_STRUCT_DefaultVoronoiFactory_DEFINED
struct DefaultVoronoiFactory__Class;
struct DefaultVoronoiFactory {
    struct DefaultVoronoiFactory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultVoronoiFactory_FWDDECL)
#define IL2CPP_STRUCT_DefaultVoronoiFactory_FWDDECL
#include <Modloader/app/structs/DefaultVoronoiFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultVoronoiFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultVoronoiFactory_DEFINED) && !defined(IL2CPP_STRUCT_DefaultVoronoiFactory_FWDDECL)
#include <Modloader/app/structs/DefaultVoronoiFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultVoronoiFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
