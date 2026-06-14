#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightCrawlerReveal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightCrawlerReveal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerReveal__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_NightCrawlerReveal__Fields_DEFINED
struct LegacyAttackableSwitch;
struct NightCrawlerRevealTorchTrigger;
struct GameObject;
struct NightCrawlerReveal_AnimationEventAction__Array;
struct Animator;
struct NightCrawlerReveal__Fields {
    struct SaveSerialize__Fields _;
    struct LegacyAttackableSwitch* WoodenGate;
    struct NightCrawlerRevealTorchTrigger* TorchTrigger;
    struct GameObject* Rig;
    struct NightCrawlerReveal_AnimationEventAction__Array* AnimationEventActions;
    int32_t kHashBeforeWoodenGateSmash;
    int32_t kHashTorchInRange;
    struct Animator* m_anim;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightCrawlerReveal__Fields_FWDDECL)
#define IL2CPP_STRUCT_NightCrawlerReveal__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAttackableSwitch.h>
#include <Modloader/app/structs/NightCrawlerRevealTorchTrigger.h>
#include <Modloader/app/structs/NightCrawlerReveal_AnimationEventAction__Array.h>
#endif
#undef IL2CPP_STRUCT_NightCrawlerReveal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerReveal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NightCrawlerReveal__Fields_FWDDECL)
#include <Modloader/app/structs/NightCrawlerReveal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightCrawlerReveal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
