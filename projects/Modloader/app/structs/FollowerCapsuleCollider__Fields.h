#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_DEFINED)
#include <Modloader/app/structs/FollowerCapsuleCollider_CapsulePlacementMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FollowerCapsuleCollider_CapsulePlacementMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_DEFINED
struct CapsuleCollider;
struct FollowerCapsuleCollider;
struct Transform;
struct FollowerCapsuleCollider__Fields {
    struct MonoBehaviour__Fields _;
    FollowerCapsuleCollider_CapsulePlacementMode__Enum PlacementMode;

    struct CapsuleCollider* Capsule;
    struct FollowerCapsuleCollider* FromReference;
    struct Transform* From;
    struct Vector3 FromOffset;
    struct FollowerCapsuleCollider* ToReference;
    struct Transform* To;
    struct Vector3 ToOffset;
    bool Batching_IgnoreGlobalOptimization;
    bool ErrorDistanceTolerance_IgnoreGlobalOptimization;
    float ErrorDistanceTolerance;
    struct Vector3 m_fromCached;
    struct Vector3 m_toCached;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_FWDDECL)
#define IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/FollowerCapsuleCollider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_FWDDECL)
#include <Modloader/app/structs/FollowerCapsuleCollider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FollowerCapsuleCollider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
