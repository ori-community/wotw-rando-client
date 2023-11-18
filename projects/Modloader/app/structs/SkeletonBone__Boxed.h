#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeletonBone__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeletonBone__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonBone__Boxed_DEFINED)
#include <Modloader/app/structs/SkeletonBone.h>
#if defined(IL2CPP_STRUCT_SkeletonBone_DEFINED)
#define IL2CPP_STRUCT_SkeletonBone__Boxed_DEFINED
struct SkeletonBone__Class;
struct SkeletonBone__Boxed {
    struct SkeletonBone__Class* klass;
    MonitorData* monitor;
    struct SkeletonBone fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeletonBone__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SkeletonBone__Boxed_FWDDECL
#include <Modloader/app/structs/SkeletonBone__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeletonBone__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonBone__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SkeletonBone__Boxed_FWDDECL)
#include <Modloader/app/structs/SkeletonBone__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeletonBone__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
