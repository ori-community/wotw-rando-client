#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrailAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrailAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrailAnimator_DEFINED)
#include <Modloader/app/structs/MeshTrailAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_MeshTrailAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_MeshTrailAnimator_DEFINED
struct MeshTrailAnimator__Class;
struct MeshTrailAnimator {
    struct MeshTrailAnimator__Class* klass;
    MonitorData* monitor;
    struct MeshTrailAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrailAnimator_FWDDECL)
#define IL2CPP_STRUCT_MeshTrailAnimator_FWDDECL
#include <Modloader/app/structs/MeshTrailAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_MeshTrailAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrailAnimator_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrailAnimator_FWDDECL)
#include <Modloader/app/structs/MeshTrailAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrailAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
