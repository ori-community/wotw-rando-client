#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/SetAnimatorPropertiesAction_FindAnimatorsMode__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_SetAnimatorPropertiesAction_FindAnimatorsMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_DEFINED
struct GameObject;
struct LegacyAnimator__Array;
struct AnimationCurve;
struct SetAnimatorPropertiesAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject* Target;
    SetAnimatorPropertiesAction_FindAnimatorsMode__Enum AnimatorsMode;

    struct LegacyAnimator__Array* Animators;
    float Speed;
    bool ShouldSetCurve;
    struct AnimationCurve* Curve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#endif
#undef IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetAnimatorPropertiesAction__Fields_FWDDECL)
#include <Modloader/app/structs/SetAnimatorPropertiesAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetAnimatorPropertiesAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
