#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeletonAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeletonAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonAnimator_DEFINED)
#include <Modloader/app/structs/SkeletonAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_SkeletonAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeletonAnimator_DEFINED
struct SkeletonAnimator__Class;
struct SkeletonAnimator {
    struct SkeletonAnimator__Class* klass;
    MonitorData* monitor;
    struct SkeletonAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeletonAnimator_FWDDECL)
#define IL2CPP_STRUCT_SkeletonAnimator_FWDDECL
#include <Modloader/app/structs/SkeletonAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeletonAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonAnimator_DEFINED) && !defined(IL2CPP_STRUCT_SkeletonAnimator_FWDDECL)
#include <Modloader/app/structs/SkeletonAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeletonAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
