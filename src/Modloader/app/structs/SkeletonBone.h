#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeletonBone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeletonBone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonBone_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_SkeletonBone_DEFINED
struct String;
struct SkeletonBone {
    struct String* name;
    struct String* parentName;
    struct Vector3 position;
    struct Quaternion rotation;
    struct Vector3 scale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeletonBone_FWDDECL)
#define IL2CPP_STRUCT_SkeletonBone_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SkeletonBone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonBone_DEFINED) && !defined(IL2CPP_STRUCT_SkeletonBone_FWDDECL)
#include <Modloader/app/structs/SkeletonBone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeletonBone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
