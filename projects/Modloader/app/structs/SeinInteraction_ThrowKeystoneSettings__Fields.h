#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_DEFINED)
#include <Modloader/app/structs/SeinInteraction_KeystoneThrowMode__Enum.h>
#if defined(IL2CPP_STRUCT_SeinInteraction_KeystoneThrowMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct __declspec(align(8)) SeinInteraction_ThrowKeystoneSettings__Fields {
    struct MoonTimeline* Timeline;
    struct EventTriggerAnimator* ThrowEvent;
    struct EventTriggerAnimator* CancellableWindow;
    SeinInteraction_KeystoneThrowMode__Enum ThrowMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinInteraction_ThrowKeystoneSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SeinInteraction_ThrowKeystoneSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInteraction_ThrowKeystoneSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
