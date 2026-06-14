#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkinnedMeshRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkinnedMeshRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinnedMeshRenderer_DEFINED)
#include <Modloader/app/structs/SkinnedMeshRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_SkinnedMeshRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_SkinnedMeshRenderer_DEFINED
struct SkinnedMeshRenderer__Class;
struct SkinnedMeshRenderer {
    struct SkinnedMeshRenderer__Class* klass;
    MonitorData* monitor;
    struct SkinnedMeshRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkinnedMeshRenderer_FWDDECL)
#define IL2CPP_STRUCT_SkinnedMeshRenderer_FWDDECL
#include <Modloader/app/structs/SkinnedMeshRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_SkinnedMeshRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinnedMeshRenderer_DEFINED) && !defined(IL2CPP_STRUCT_SkinnedMeshRenderer_FWDDECL)
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
