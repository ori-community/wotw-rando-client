#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkinnedMeshLod_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkinnedMeshLod_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinnedMeshLod_DEFINED)
#include <Modloader/app/structs/SkinnedMeshLod__Fields.h>
#if defined(IL2CPP_STRUCT_SkinnedMeshLod__Fields_DEFINED)
#define IL2CPP_STRUCT_SkinnedMeshLod_DEFINED
struct SkinnedMeshLod__Class;
struct SkinnedMeshLod {
    struct SkinnedMeshLod__Class* klass;
    MonitorData* monitor;
    struct SkinnedMeshLod__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkinnedMeshLod_FWDDECL)
#define IL2CPP_STRUCT_SkinnedMeshLod_FWDDECL
#include <Modloader/app/structs/SkinnedMeshLod__Class.h>
#endif
#undef IL2CPP_STRUCT_SkinnedMeshLod_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinnedMeshLod_DEFINED) && !defined(IL2CPP_STRUCT_SkinnedMeshLod_FWDDECL)
#include <Modloader/app/structs/SkinnedMeshLod.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkinnedMeshLod.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
