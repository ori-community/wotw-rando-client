#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_DEFINED)
#include <Modloader/app/structs/MeleeComboMoveSword__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeComboMoveSword__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_DEFINED
struct GameObject;
struct Event_1;
struct MeleeComboMoveSwordCharge__Fields {
    struct MeleeComboMoveSword__Fields _;
    float ChargeTime;
    struct GameObject* ChargingEffectToSpawn;
    struct GameObject* ChargedEffectToSpawn;
    struct Event_1* ChargeLoopStartEvent;
    struct Event_1* ChargeLoopStopEvent;
    struct Event_1* ChargeCompleteEvent;
    struct Event_1* FullyChargedLoopStartEvent;
    struct Event_1* FullyChargedLoopStopEvent;
    bool StateController;
    bool m_requiresButtonRelease;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveSwordCharge__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveSwordCharge__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
