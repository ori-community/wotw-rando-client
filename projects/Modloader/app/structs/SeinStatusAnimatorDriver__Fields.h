#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SeinStatusAnimatorDriver_SeinStatus__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver_SeinStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_DEFINED
struct BaseAnimator;
struct SeinStatusAnimatorDriver__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator* Animator;
    SeinStatusAnimatorDriver_SeinStatus__Enum StatusType;

    float DivideBy;
    float PossibleMax;
    float DebugValue;
    float DebugMax;
    float m_lastValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#endif
#undef IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_FWDDECL)
#include <Modloader/app/structs/SeinStatusAnimatorDriver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinStatusAnimatorDriver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
