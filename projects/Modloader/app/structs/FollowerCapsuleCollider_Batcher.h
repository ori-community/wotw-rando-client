#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_DEFINED)
#define IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_DEFINED
struct CapsuleCollider__Array;
struct Transform__Array;
struct Vector3__Array;
struct Quaternion__Array;
struct Single__Array;
struct FollowerCapsuleCollider_Batcher {
    struct CapsuleCollider__Array* m_capsule;
    struct Transform__Array* m_transform;
    struct Vector3__Array* m_pos;
    struct Quaternion__Array* m_rot;
    struct Single__Array* m_height;
    int32_t m_pendingBatchCount;
};
#endif
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_FWDDECL)
#define IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_FWDDECL
#include <Modloader/app/structs/CapsuleCollider__Array.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_DEFINED) && !defined(IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_FWDDECL)
#include <Modloader/app/structs/FollowerCapsuleCollider_Batcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FollowerCapsuleCollider_Batcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
