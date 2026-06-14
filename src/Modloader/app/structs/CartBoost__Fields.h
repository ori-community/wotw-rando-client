#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartBoost__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartBoost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBoost__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_CartBoost__Fields_DEFINED
struct PlatformBehaviour;
struct LegacyTimelineSequence;
struct MoonTimeline;
struct CartAnimation;
struct Cart;
struct CartBoost__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour* PlatformBehaviour;
    bool AutoRechargeBoost;
    float BoostRechargeRate;
    float BoostSpeed;
    struct LegacyTimelineSequence* BoostSequence;
    struct MoonTimeline* BoostSequenceNew;
    struct CartAnimation* CartAnimation;
    struct Cart* Cart;
    float BoostDuration;
    float BoostRecoveryDuration;
    float m_boostCharge;
    bool m_isPerforming;
    float m_timer;
    float _BoostExtraSpeed_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartBoost__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartBoost__Fields_FWDDECL
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/CartAnimation.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CartBoost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBoost__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartBoost__Fields_FWDDECL)
#include <Modloader/app/structs/CartBoost__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartBoost__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
