#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapHookLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapHookLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookLogic__Fields_DEFINED)
#include <Modloader/app/structs/SnapTrapEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SnapTrapEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapHookLogic__Fields_DEFINED
struct SnapTrapHookAnimator;
struct LeashHookLogic;
struct EventTriggerAnimator;
struct SnapTrapHookLogic__Fields {
    struct SnapTrapEntity__Fields _;
    struct SnapTrapHookAnimator* Animator;
    struct LeashHookLogic* LeashHookLogic;
    struct EventTriggerAnimator* ReleaseLeashTrigger;
    struct EventTriggerAnimator* DisableLeashTrigger;
    struct EventTriggerAnimator* EnableLeashTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapHookLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapHookLogic__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/LeashHookLogic.h>
#include <Modloader/app/structs/SnapTrapHookAnimator.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapHookLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapHookLogic__Fields_FWDDECL)
#include <Modloader/app/structs/SnapTrapHookLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapHookLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
