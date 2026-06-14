#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaEntity_TongueJoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaEntity_TongueJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaEntity_TongueJoint_DEFINED)
#define IL2CPP_STRUCT_LianaEntity_TongueJoint_DEFINED
struct Transform;
struct LianaEntity_TongueJoint {
    struct Transform* Transform;
    struct Transform* MinLink;
    struct Transform* MaxLink;
};
#endif
#if !defined(IL2CPP_STRUCT_LianaEntity_TongueJoint_FWDDECL)
#define IL2CPP_STRUCT_LianaEntity_TongueJoint_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LianaEntity_TongueJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaEntity_TongueJoint_DEFINED) && !defined(IL2CPP_STRUCT_LianaEntity_TongueJoint_FWDDECL)
#include <Modloader/app/structs/LianaEntity_TongueJoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaEntity_TongueJoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
