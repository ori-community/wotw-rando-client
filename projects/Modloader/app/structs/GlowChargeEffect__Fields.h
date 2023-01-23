#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlowChargeEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlowChargeEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlowChargeEffect__Fields_DEFINED)
#include <Modloader/app/structs/GlowChargeEffect_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_GlowChargeEffect_State__Enum_DEFINED)
#define IL2CPP_STRUCT_GlowChargeEffect__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct Action;
struct GlowChargeEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* ChargeTimeline;
    struct MoonTimeline* CancelTimeline;
    struct EventTriggerAnimator* ChargeCompletedTrigger;
    struct Action* OnChargeCompleted;
    GlowChargeEffect_State__Enum m_currentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlowChargeEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_GlowChargeEffect__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_GlowChargeEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlowChargeEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GlowChargeEffect__Fields_FWDDECL)
#include <Modloader/app/structs/GlowChargeEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlowChargeEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
