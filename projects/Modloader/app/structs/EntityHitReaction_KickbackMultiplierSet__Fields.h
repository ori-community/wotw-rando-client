#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_DEFINED
struct Condition_1;
struct __declspec(align(8)) EntityHitReaction_KickbackMultiplierSet__Fields {
    float KickbackMultiplier;
    float KickbackMultiplierUp;
    float KickbackMultiplierDown;
    float KickbackMultiplierConditional;
    struct Condition_1* MultiplierCondition;
    struct Condition_1* MultiplierUpCondition;
    struct Condition_1* MultiplierDownCondition;
    float FinalHitMultiplier;
    float AirKickbackMultiplier;
    float AirKickbackMultiplierUp;
    float AirKickbackMultiplierDown;
    float AirFinalHitMultiplier;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityHitReaction_KickbackMultiplierSet__Fields_FWDDECL)
#include <Modloader/app/structs/EntityHitReaction_KickbackMultiplierSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHitReaction_KickbackMultiplierSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
