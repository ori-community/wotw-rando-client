#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/AnimatorAction_FindAnimatorsMode__Enum.h>
#include <Modloader/app/structs/AnimatorAction_PlayMode__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimatorAction_FindAnimatorsMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_AnimatorAction_PlayMode__Enum_DEFINED)
#define IL2CPP_STRUCT_AnimatorAction__Fields_DEFINED
struct GameObject;
struct LegacyAnimator__Array;
struct DelayedAction;
struct AnimatorAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject* Target;
    AnimatorAction_FindAnimatorsMode__Enum AnimatorsMode;

    AnimatorAction_PlayMode__Enum Command;

    struct LegacyAnimator__Array* Animators;
    struct DelayedAction* m_delayedAction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatorAction__Fields_FWDDECL
#include <Modloader/app/structs/DelayedAction.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#endif
#undef IL2CPP_STRUCT_AnimatorAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorAction__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatorAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
