#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateDamageAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateDamageAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateDamageAnimator__Fields_DEFINED)
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateDamageAnimator__Fields_DEFINED
struct DamageDealer__Array;
struct DamageReceiver__Array;
struct MoonReference_1_UnityEngine_GameObject_;
struct GameObject;
struct DamageDealer_OverrideInfo;
struct DamageReceiver_OverrideInfo;
struct ActivateDamageAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    bool Enabled;
    bool ShouldAffectDamageDealers;
    bool ShouldAffectDamageReceivers;
    bool ShouldAffectChildren;
    struct DamageDealer__Array* m_damageDealers;
    struct DamageReceiver__Array* m_damageReceivers;
    bool OverrideDamage;
    float Damage;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    struct GameObject* m_targetGameObject;
    struct DamageDealer_OverrideInfo* m_dealerOverride;
    struct DamageReceiver_OverrideInfo* m_receiverOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateDamageAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivateDamageAnimator__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer_OverrideInfo.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>
#include <Modloader/app/structs/DamageReceiver__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_ActivateDamageAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateDamageAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivateDamageAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ActivateDamageAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateDamageAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
