#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Pose_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Pose_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pose_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_Pose_DEFINED
struct Pose {
    struct Vector3 position;
    struct Quaternion rotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Pose_FWDDECL)
#define IL2CPP_STRUCT_Pose_FWDDECL
#endif
#undef IL2CPP_STRUCT_Pose_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pose_DEFINED) && !defined(IL2CPP_STRUCT_Pose_FWDDECL)
#include <Modloader/app/structs/Pose.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Pose.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
