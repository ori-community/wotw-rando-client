#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_DEFINED)
#include <Modloader/app/structs/FollowerCapsuleCollider_Batcher.h>
#if defined(IL2CPP_STRUCT_FollowerCapsuleCollider_Batcher_DEFINED)
#define IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_DEFINED
struct List_1_UnityEngine_CapsuleCollider_;
struct CapsuleCollider__Array;
struct FollowerCapsuleCollider__StaticFields {
    bool BatchingEnabled;
    struct FollowerCapsuleCollider_Batcher m_batcher;
    struct List_1_UnityEngine_CapsuleCollider_* m_clients;
    struct CapsuleCollider__Array* m_temp;
    float ErrorDistanceToleranceOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_CapsuleCollider_.h>
#endif
#undef IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FollowerCapsuleCollider__StaticFields_FWDDECL)
#include <Modloader/app/structs/FollowerCapsuleCollider__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FollowerCapsuleCollider__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
