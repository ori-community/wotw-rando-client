#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) CameraTarget_TargetLayer__Fields {
    bool FollowTargetX;
    bool FollowTargetY;
    bool FollowTargetZ;
    struct Transform* Transform;
    float Weight;
    int32_t Priority;
};
#endif
#if !defined(IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraTarget_TargetLayer__Fields_FWDDECL)
#include <Modloader/app/structs/CameraTarget_TargetLayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTarget_TargetLayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
