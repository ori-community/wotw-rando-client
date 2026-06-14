#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct EventTriggerAnimator;
struct TeleportPlayerOnTimelineEvent__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* Destination;
    bool PlaceOnGround;
    struct EventTriggerAnimator* Event;
    bool CreateCheckpoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TeleportPlayerOnTimelineEvent__Fields_FWDDECL)
#include <Modloader/app/structs/TeleportPlayerOnTimelineEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TeleportPlayerOnTimelineEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
