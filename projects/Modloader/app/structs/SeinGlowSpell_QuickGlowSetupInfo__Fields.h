#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct __declspec(align(8)) SeinGlowSpell_QuickGlowSetupInfo__Fields {
    struct MoonTimeline* ReleaseTimeline;
    struct EventTriggerAnimator* ReleaseTrigger;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGlowSpell_QuickGlowSetupInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowSetupInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowSetupInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
