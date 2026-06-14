#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeletonGizmo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeletonGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonGizmo_DEFINED)
#include <Modloader/app/structs/SkeletonGizmo__Fields.h>
#if defined(IL2CPP_STRUCT_SkeletonGizmo__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeletonGizmo_DEFINED
struct SkeletonGizmo__Class;
struct SkeletonGizmo {
    struct SkeletonGizmo__Class* klass;
    MonitorData* monitor;
    struct SkeletonGizmo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeletonGizmo_FWDDECL)
#define IL2CPP_STRUCT_SkeletonGizmo_FWDDECL
#include <Modloader/app/structs/SkeletonGizmo__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeletonGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonGizmo_DEFINED) && !defined(IL2CPP_STRUCT_SkeletonGizmo_FWDDECL)
#include <Modloader/app/structs/SkeletonGizmo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeletonGizmo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
