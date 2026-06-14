#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseAnimatorAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseAnimatorAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimatorAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/BaseAnimatorAction_FindAnimatorsMode__Enum.h>
#include <Modloader/app/structs/BaseAnimatorAction_PlayMode__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_BaseAnimatorAction_FindAnimatorsMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_DEFINED)
#define IL2CPP_STRUCT_BaseAnimatorAction__Fields_DEFINED
struct GameObject;
struct BaseAnimator__Array;
struct BaseAnimatorAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject* Target;
    BaseAnimatorAction_FindAnimatorsMode__Enum AnimatorsMode;

    BaseAnimatorAction_PlayMode__Enum Command;

    struct BaseAnimator__Array* Animators;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseAnimatorAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseAnimatorAction__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_BaseAnimatorAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimatorAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseAnimatorAction__Fields_FWDDECL)
#include <Modloader/app/structs/BaseAnimatorAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseAnimatorAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
