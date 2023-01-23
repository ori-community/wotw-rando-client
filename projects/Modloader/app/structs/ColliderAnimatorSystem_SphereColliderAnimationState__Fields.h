#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_DEFINED)
#include <Modloader/app/structs/SphereColliderAnimator_AnimationMode__Enum.h>
#if defined(IL2CPP_STRUCT_SphereColliderAnimator_AnimationMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_DEFINED
struct SphereCollider;
struct __declspec(align(8)) ColliderAnimatorSystem_SphereColliderAnimationState__Fields {
    int32_t InstanceID;
    struct SphereCollider* Collider;
    SphereColliderAnimator_AnimationMode__Enum Mode;

    float OriginalRadius;
    float DesiredRadius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_FWDDECL
#include <Modloader/app/structs/SphereCollider.h>
#endif
#undef IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColliderAnimatorSystem_SphereColliderAnimationState__Fields_FWDDECL)
#include <Modloader/app/structs/ColliderAnimatorSystem_SphereColliderAnimationState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColliderAnimatorSystem_SphereColliderAnimationState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
