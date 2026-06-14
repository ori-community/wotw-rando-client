#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexSorter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexSorter_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexSorter_DEFINED)
#include <Modloader/app/structs/VertexSorter__Fields.h>
#if defined(IL2CPP_STRUCT_VertexSorter__Fields_DEFINED)
#define IL2CPP_STRUCT_VertexSorter_DEFINED
struct VertexSorter__Class;
struct VertexSorter {
    struct VertexSorter__Class* klass;
    MonitorData* monitor;
    struct VertexSorter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VertexSorter_FWDDECL)
#define IL2CPP_STRUCT_VertexSorter_FWDDECL
#include <Modloader/app/structs/VertexSorter__Class.h>
#endif
#undef IL2CPP_STRUCT_VertexSorter_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexSorter_DEFINED) && !defined(IL2CPP_STRUCT_VertexSorter_FWDDECL)
#include <Modloader/app/structs/VertexSorter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexSorter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
