#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverrideReactionAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverrideReactionAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverrideReactionAnimator__Fields_DEFINED)
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_OverrideReactionAnimator__Fields_DEFINED
struct EntityReactions;
struct EntityReactionBehaviour__Array;
struct OverrideReactionAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    struct EntityReactions* EntityReactions;
    struct EntityReactionBehaviour__Array* ReactionsToOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverrideReactionAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_OverrideReactionAnimator__Fields_FWDDECL
#include <Modloader/app/structs/EntityReactionBehaviour__Array.h>
#include <Modloader/app/structs/EntityReactions.h>
#endif
#undef IL2CPP_STRUCT_OverrideReactionAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverrideReactionAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OverrideReactionAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/OverrideReactionAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverrideReactionAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
