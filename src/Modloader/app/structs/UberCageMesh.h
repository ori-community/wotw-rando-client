#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberCageMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberCageMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberCageMesh_DEFINED)
#include <Modloader/app/structs/UberCageMesh__Fields.h>
#if defined(IL2CPP_STRUCT_UberCageMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_UberCageMesh_DEFINED
struct UberCageMesh__Class;
struct UberCageMesh {
    struct UberCageMesh__Class* klass;
    MonitorData* monitor;
    struct UberCageMesh__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberCageMesh_FWDDECL)
#define IL2CPP_STRUCT_UberCageMesh_FWDDECL
#include <Modloader/app/structs/UberCageMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_UberCageMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberCageMesh_DEFINED) && !defined(IL2CPP_STRUCT_UberCageMesh_FWDDECL)
#include <Modloader/app/structs/UberCageMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberCageMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
