#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NaruController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NaruController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_NaruController__Fields_DEFINED
struct NaruController_AnimationSet;
struct StateMachine_2;
struct Naru;
struct NaruController__Fields {
    struct MonoBehaviour__Fields _;
    struct NaruController_AnimationSet* Animations;
    float JumpHeight;
    struct StateMachine_2* Logic;
    struct Naru* Naru;
    float m_lockHorizontalMovementDuration;
    float m_lockChangingDirectionDuration;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NaruController__Fields_FWDDECL)
#define IL2CPP_STRUCT_NaruController__Fields_FWDDECL
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/NaruController_AnimationSet.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_NaruController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NaruController__Fields_FWDDECL)
#include <Modloader/app/structs/NaruController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NaruController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
