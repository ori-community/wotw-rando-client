#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshFilter_DEFINED)
#include <Modloader/app/structs/MeshFilter__Fields.h>
#if defined(IL2CPP_STRUCT_MeshFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_MeshFilter_DEFINED
struct MeshFilter__Class;
struct MeshFilter {
    struct MeshFilter__Class* klass;
    MonitorData* monitor;
    struct MeshFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshFilter_FWDDECL)
#define IL2CPP_STRUCT_MeshFilter_FWDDECL
#include <Modloader/app/structs/MeshFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_MeshFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshFilter_DEFINED) && !defined(IL2CPP_STRUCT_MeshFilter_FWDDECL)
#include <Modloader/app/structs/MeshFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
