#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineMesh_DEFINED)
#include <Modloader/app/structs/LineMesh__Fields.h>
#if defined(IL2CPP_STRUCT_LineMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_LineMesh_DEFINED
struct LineMesh__Class;
struct LineMesh {
    struct LineMesh__Class* klass;
    MonitorData* monitor;
    struct LineMesh__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineMesh_FWDDECL)
#define IL2CPP_STRUCT_LineMesh_FWDDECL
#include <Modloader/app/structs/LineMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_LineMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineMesh_DEFINED) && !defined(IL2CPP_STRUCT_LineMesh_FWDDECL)
#include <Modloader/app/structs/LineMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
