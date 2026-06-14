#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshRenderer_DEFINED)
#include <Modloader/app/structs/MeshRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_MeshRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_MeshRenderer_DEFINED
struct MeshRenderer__Class;
struct MeshRenderer {
    struct MeshRenderer__Class* klass;
    MonitorData* monitor;
    struct MeshRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshRenderer_FWDDECL)
#define IL2CPP_STRUCT_MeshRenderer_FWDDECL
#include <Modloader/app/structs/MeshRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_MeshRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshRenderer_DEFINED) && !defined(IL2CPP_STRUCT_MeshRenderer_FWDDECL)
#include <Modloader/app/structs/MeshRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
