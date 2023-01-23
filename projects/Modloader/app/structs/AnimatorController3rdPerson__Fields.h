#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_DEFINED
struct Animator;
struct AnimatorController3rdPerson__Fields {
    struct MonoBehaviour__Fields _;
    float rotateSpeed;
    float blendSpeed;
    float maxAngle;
    float moveSpeed;
    float rootMotionWeight;
    struct Animator* animator;
    struct Vector3 moveBlend;
    struct Vector3 moveInput;
    struct Vector3 velocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#endif
#undef IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatorController3rdPerson__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorController3rdPerson__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
