#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReactionSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReactionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionSettings__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_HitReactionSettings__Fields_DEFINED
struct HitReactionSettings__Fields {
    struct ScriptableObject__Fields _;
    bool IsAdditiveKickbackEnabled;
    float KickbackForceDampening;
    float KickbackBaseMultiplier;
    float KickbackVeryLightDamageMultiplier;
    float KickbackLightDamageMultiplier;
    float KickbackMediumDamageMultiplier;
    float KickbackHeavyDamageMultiplier;
    float KickbackHeavierDamageMultiplier;
    float KickbackLightEntityMultiplier;
    float KickbackMediumEntityMultiplier;
    float KickbackHeavyEntityMultiplier;
    bool IsAdditiveAnimScalingEnabled;
    struct Vector2 AdditiveAnimDamageAmountRange;
    struct Vector2 AdditiveAnimWeightRange;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReactionSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitReactionSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_HitReactionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitReactionSettings__Fields_FWDDECL)
#include <Modloader/app/structs/HitReactionSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReactionSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
