#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeletonGizmo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeletonGizmo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonGizmo__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SkeletonGizmo__Fields_DEFINED
struct Transform__Array;
struct SkeletonGizmo__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform__Array* childNodes;
    struct Color color;
    float JointSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeletonGizmo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeletonGizmo__Fields_FWDDECL
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_SkeletonGizmo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonGizmo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeletonGizmo__Fields_FWDDECL)
#include <Modloader/app/structs/SkeletonGizmo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeletonGizmo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
