#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_DEFINED
struct IMontageEventProvider;
struct String;
struct AnimationMontage;
struct __declspec(align(8)) AnimationMontage_TimelineEventSubscription__Fields {
    struct IMontageEventProvider* Provider;
    struct String* EventId;
    struct AnimationMontage* Montage;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMontage.h>
#include <Modloader/app/structs/IMontageEventProvider.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMontage_TimelineEventSubscription__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
