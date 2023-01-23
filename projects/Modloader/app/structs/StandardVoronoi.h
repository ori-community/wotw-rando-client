#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StandardVoronoi_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StandardVoronoi_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandardVoronoi_DEFINED)
#include <Modloader/app/structs/StandardVoronoi__Fields.h>
#if defined(IL2CPP_STRUCT_StandardVoronoi__Fields_DEFINED)
#define IL2CPP_STRUCT_StandardVoronoi_DEFINED
struct StandardVoronoi__Class;
struct StandardVoronoi {
    struct StandardVoronoi__Class* klass;
    MonitorData* monitor;
    struct StandardVoronoi__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StandardVoronoi_FWDDECL)
#define IL2CPP_STRUCT_StandardVoronoi_FWDDECL
#include <Modloader/app/structs/StandardVoronoi__Class.h>
#endif
#undef IL2CPP_STRUCT_StandardVoronoi_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandardVoronoi_DEFINED) && !defined(IL2CPP_STRUCT_StandardVoronoi_FWDDECL)
#include <Modloader/app/structs/StandardVoronoi.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StandardVoronoi.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
