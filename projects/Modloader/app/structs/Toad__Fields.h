#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Toad__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Toad__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toad__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Toad__Fields_DEFINED
struct Toad_AnimationEventAction__Array;
struct GameObject;
struct Condition_1;
struct Animator;
struct Toad__Fields {
    struct SaveSerialize__Fields _;
    struct Toad_AnimationEventAction__Array* AnimationEventActions;
    struct GameObject* Rig;
    struct Condition_1* StartRevealedCondition;
    struct Animator* m_animator;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Toad__Fields_FWDDECL)
#define IL2CPP_STRUCT_Toad__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Toad_AnimationEventAction__Array.h>
#endif
#undef IL2CPP_STRUCT_Toad__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toad__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Toad__Fields_FWDDECL)
#include <Modloader/app/structs/Toad__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Toad__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
