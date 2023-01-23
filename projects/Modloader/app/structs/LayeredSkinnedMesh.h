#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayeredSkinnedMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayeredSkinnedMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredSkinnedMesh_DEFINED)
#include <Modloader/app/structs/LayeredSkinnedMesh__Fields.h>
#if defined(IL2CPP_STRUCT_LayeredSkinnedMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_LayeredSkinnedMesh_DEFINED
struct LayeredSkinnedMesh__Class;
struct LayeredSkinnedMesh {
    struct LayeredSkinnedMesh__Class* klass;
    MonitorData* monitor;
    struct LayeredSkinnedMesh__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayeredSkinnedMesh_FWDDECL)
#define IL2CPP_STRUCT_LayeredSkinnedMesh_FWDDECL
#include <Modloader/app/structs/LayeredSkinnedMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_LayeredSkinnedMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredSkinnedMesh_DEFINED) && !defined(IL2CPP_STRUCT_LayeredSkinnedMesh_FWDDECL)
#include <Modloader/app/structs/LayeredSkinnedMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayeredSkinnedMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
