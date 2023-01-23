#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabEntity__Fields_DEFINED)
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#if defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabEntity__Fields_DEFINED
struct CrabEntity_DamageTime;
struct List_1_CrabEntity_DamageTime_;
struct EntityTargetting;
struct Event_1;
struct CrabEntity__Fields {
    struct GroundMovingEntity__Fields _;
    struct CrabEntity_DamageTime* RetaliationConditions;
    float RetaliationActivationTimeWindow;
    float BaseAttackInterval;
    float GroupAttackIntervalMultiplier;
    struct List_1_CrabEntity_DamageTime_* m_takenDamageElapsedTime;
    float m_retaliationAllowedTimer;
    struct EntityTargetting* Targetting;
    struct Event_1* WwiseClawAttackInterrupted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabEntity__Fields_FWDDECL
#include <Modloader/app/structs/CrabEntity_DamageTime.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/List_1_CrabEntity_DamageTime_.h>
#endif
#undef IL2CPP_STRUCT_CrabEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabEntity__Fields_FWDDECL)
#include <Modloader/app/structs/CrabEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
