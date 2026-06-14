#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleVoronoi_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleVoronoi_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleVoronoi_DEFINED)
#include <Modloader/app/structs/SimpleVoronoi__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleVoronoi__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleVoronoi_DEFINED
struct SimpleVoronoi__Class;
struct SimpleVoronoi {
    struct SimpleVoronoi__Class* klass;
    MonitorData* monitor;
    struct SimpleVoronoi__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleVoronoi_FWDDECL)
#define IL2CPP_STRUCT_SimpleVoronoi_FWDDECL
#include <Modloader/app/structs/SimpleVoronoi__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleVoronoi_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleVoronoi_DEFINED) && !defined(IL2CPP_STRUCT_SimpleVoronoi_FWDDECL)
#include <Modloader/app/structs/SimpleVoronoi.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleVoronoi.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
