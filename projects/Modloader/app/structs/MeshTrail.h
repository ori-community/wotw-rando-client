#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_DEFINED)
#include <Modloader/app/structs/MeshTrail__Fields.h>
#if defined(IL2CPP_STRUCT_MeshTrail__Fields_DEFINED)
#define IL2CPP_STRUCT_MeshTrail_DEFINED
struct MeshTrail__Class;
struct MeshTrail {
    struct MeshTrail__Class* klass;
    MonitorData* monitor;
    struct MeshTrail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrail_FWDDECL)
#define IL2CPP_STRUCT_MeshTrail_FWDDECL
#include <Modloader/app/structs/MeshTrail__Class.h>
#endif
#undef IL2CPP_STRUCT_MeshTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrail_FWDDECL)
#include <Modloader/app/structs/MeshTrail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
