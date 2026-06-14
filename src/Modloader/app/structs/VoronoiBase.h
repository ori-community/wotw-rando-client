#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VoronoiBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VoronoiBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiBase_DEFINED)
#include <Modloader/app/structs/VoronoiBase__Fields.h>
#if defined(IL2CPP_STRUCT_VoronoiBase__Fields_DEFINED)
#define IL2CPP_STRUCT_VoronoiBase_DEFINED
struct VoronoiBase__Class;
struct VoronoiBase {
    struct VoronoiBase__Class* klass;
    MonitorData* monitor;
    struct VoronoiBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VoronoiBase_FWDDECL)
#define IL2CPP_STRUCT_VoronoiBase_FWDDECL
#include <Modloader/app/structs/VoronoiBase__Class.h>
#endif
#undef IL2CPP_STRUCT_VoronoiBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiBase_DEFINED) && !defined(IL2CPP_STRUCT_VoronoiBase_FWDDECL)
#include <Modloader/app/structs/VoronoiBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VoronoiBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
