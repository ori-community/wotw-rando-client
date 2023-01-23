#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetPositionFollower__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetPositionFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetPositionFollower__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TargetPositionFollower__Fields_DEFINED
struct Transform;
struct TargetPositionFollower__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Target;
    bool TargetCamera;
    bool TargetOri;
    struct Vector3 Offset;
    bool FollowZ;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetPositionFollower__Fields_FWDDECL)
#define IL2CPP_STRUCT_TargetPositionFollower__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TargetPositionFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetPositionFollower__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TargetPositionFollower__Fields_FWDDECL)
#include <Modloader/app/structs/TargetPositionFollower__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetPositionFollower__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
