#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VoronoiFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VoronoiFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiFactory_DEFINED)
#include <Modloader/app/structs/VoronoiFactory__Fields.h>
#if defined(IL2CPP_STRUCT_VoronoiFactory__Fields_DEFINED)
#define IL2CPP_STRUCT_VoronoiFactory_DEFINED
struct VoronoiFactory__Class;
struct VoronoiFactory {
    struct VoronoiFactory__Class* klass;
    MonitorData* monitor;
    struct VoronoiFactory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VoronoiFactory_FWDDECL)
#define IL2CPP_STRUCT_VoronoiFactory_FWDDECL
#include <Modloader/app/structs/VoronoiFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_VoronoiFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiFactory_DEFINED) && !defined(IL2CPP_STRUCT_VoronoiFactory_FWDDECL)
#include <Modloader/app/structs/VoronoiFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VoronoiFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
