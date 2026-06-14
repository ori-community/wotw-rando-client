#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_DEFINED)
#define IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_DEFINED
struct GameObject;
struct AttachPrefabsToLiannaTongue_TonguePoints {
    int32_t JointNumber;
    struct GameObject* PrefabToAttach;
};
#endif
#if !defined(IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_FWDDECL)
#define IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_DEFINED) && !defined(IL2CPP_STRUCT_AttachPrefabsToLiannaTongue_TonguePoints_FWDDECL)
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
