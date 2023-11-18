#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorCondition__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorCondition_AnimatorMode__Enum.h>
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimatorCondition_AnimatorMode__Enum_DEFINED)
#define IL2CPP_STRUCT_AnimatorCondition__Fields_DEFINED
struct LegacyAnimator;
struct AnimatorCondition__Fields {
    struct Condition_1__Fields _;
    AnimatorCondition_AnimatorMode__Enum Mode;

    struct LegacyAnimator* Animator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatorCondition__Fields_FWDDECL
#include <Modloader/app/structs/LegacyAnimator.h>
#endif
#undef IL2CPP_STRUCT_AnimatorCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorCondition__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatorCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
