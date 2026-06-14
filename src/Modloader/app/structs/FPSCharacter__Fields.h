#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSCharacter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSCharacter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCharacter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSCharacter__Fields_DEFINED
struct Animator;
struct FPSAiming;
struct FPSCharacter__Fields {
    struct MonoBehaviour__Fields _;
    float walkSpeed;
    float sVel;
    struct Animator* animator;
    struct FPSAiming* FPSAiming;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSCharacter__Fields_FWDDECL)
#define IL2CPP_STRUCT_FPSCharacter__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/FPSAiming.h>
#endif
#undef IL2CPP_STRUCT_FPSCharacter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCharacter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FPSCharacter__Fields_FWDDECL)
#include <Modloader/app/structs/FPSCharacter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSCharacter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
