#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LevelUpDamageAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LevelUpDamageAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LevelUpDamageAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LevelUpDamageAction__Fields_DEFINED
struct HashSet_1_IAttackable_;
struct AnimationCurve;
struct LevelUpDamageAction__Fields {
    struct ActionMethod__Fields _;
    struct HashSet_1_IAttackable_* m_attackables;
    bool m_active;
    float m_time;
    struct AnimationCurve* DistanceOverTime;
    float Duration;
    int32_t Damage;
    float m_delayTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LevelUpDamageAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_LevelUpDamageAction__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/HashSet_1_IAttackable_.h>
#endif
#undef IL2CPP_STRUCT_LevelUpDamageAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LevelUpDamageAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LevelUpDamageAction__Fields_FWDDECL)
#include <Modloader/app/structs/LevelUpDamageAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LevelUpDamageAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
