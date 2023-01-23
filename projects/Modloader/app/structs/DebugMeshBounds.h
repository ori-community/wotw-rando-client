#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMeshBounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMeshBounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMeshBounds_DEFINED)
#include <Modloader/app/structs/DebugMeshBounds__Fields.h>
#if defined(IL2CPP_STRUCT_DebugMeshBounds__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMeshBounds_DEFINED
struct DebugMeshBounds__Class;
struct DebugMeshBounds {
    struct DebugMeshBounds__Class* klass;
    MonitorData* monitor;
    struct DebugMeshBounds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMeshBounds_FWDDECL)
#define IL2CPP_STRUCT_DebugMeshBounds_FWDDECL
#include <Modloader/app/structs/DebugMeshBounds__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugMeshBounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMeshBounds_DEFINED) && !defined(IL2CPP_STRUCT_DebugMeshBounds_FWDDECL)
#include <Modloader/app/structs/DebugMeshBounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMeshBounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
