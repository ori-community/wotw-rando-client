#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdjacencyMatrix_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdjacencyMatrix_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdjacencyMatrix_DEFINED)
#include <Modloader/app/structs/AdjacencyMatrix__Fields.h>
#if defined(IL2CPP_STRUCT_AdjacencyMatrix__Fields_DEFINED)
#define IL2CPP_STRUCT_AdjacencyMatrix_DEFINED
struct AdjacencyMatrix__Class;
struct AdjacencyMatrix {
    struct AdjacencyMatrix__Class* klass;
    MonitorData* monitor;
    struct AdjacencyMatrix__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AdjacencyMatrix_FWDDECL)
#define IL2CPP_STRUCT_AdjacencyMatrix_FWDDECL
#include <Modloader/app/structs/AdjacencyMatrix__Class.h>
#endif
#undef IL2CPP_STRUCT_AdjacencyMatrix_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdjacencyMatrix_DEFINED) && !defined(IL2CPP_STRUCT_AdjacencyMatrix_FWDDECL)
#include <Modloader/app/structs/AdjacencyMatrix.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdjacencyMatrix.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
