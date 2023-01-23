#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_DEFINED)
#include <Modloader/app/structs/MeleeComboMoveSwordCharge_State__Enum.h>
#if defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_DEFINED
struct GameObject;
struct MeleeComboMoveSwordCharge__StaticFields {
    struct GameObject* m_chargingEffect;
    struct GameObject* m_chargedEffect;
    float m_delayBeforeCharging;
    float m_chargeTimer;
    MeleeComboMoveSwordCharge_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveSwordCharge__StaticFields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveSwordCharge__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveSwordCharge__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
