#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeashHookLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeashHookLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookLogic__Fields_DEFINED)
#include <Modloader/app/structs/LeashHookLogic_State__Enum.h>
#include <Modloader/app/structs/SpiritLeashHook__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritLeashHook__Fields_DEFINED) && defined(IL2CPP_STRUCT_LeashHookLogic_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LeashHookLogic__Fields_DEFINED
struct LeashHookAnimator;
struct MoonTimeline;
struct SeinSpiritLeashAbility;
struct LeashHookLogic__Fields {
    struct SpiritLeashHook__Fields _;
    struct LeashHookAnimator* Animator;
    float ClosedRadius;
    float OpenedRadius;
    LeashHookLogic_State__Enum m_currentState;

    struct MoonTimeline* m_currentTimeline;
    struct SeinSpiritLeashAbility* m_leash;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeashHookLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeashHookLogic__Fields_FWDDECL
#include <Modloader/app/structs/LeashHookAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility.h>
#endif
#undef IL2CPP_STRUCT_LeashHookLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeashHookLogic__Fields_FWDDECL)
#include <Modloader/app/structs/LeashHookLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeashHookLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
