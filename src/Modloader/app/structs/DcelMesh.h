#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DcelMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DcelMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_DcelMesh_DEFINED)
#include <Modloader/app/structs/DcelMesh__Fields.h>
#if defined(IL2CPP_STRUCT_DcelMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_DcelMesh_DEFINED
struct DcelMesh__Class;
struct DcelMesh {
    struct DcelMesh__Class* klass;
    MonitorData* monitor;
    struct DcelMesh__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DcelMesh_FWDDECL)
#define IL2CPP_STRUCT_DcelMesh_FWDDECL
#include <Modloader/app/structs/DcelMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_DcelMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_DcelMesh_DEFINED) && !defined(IL2CPP_STRUCT_DcelMesh_FWDDECL)
#include <Modloader/app/structs/DcelMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DcelMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
