#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateCooldownRule__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateCooldownRule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateCooldownRule__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateCooldownRule__Fields_DEFINED
struct MeleeComboMove;
struct IComboMove;
struct __declspec(align(8)) ActivateCooldownRule__Fields {
    float _CurrentCooldown_k__BackingField;
    struct MeleeComboMove* TargetMove;
    float TargetsCooldown;
    bool ResetByLanding;
    struct IComboMove* _CooldownSourceMove_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ActivateCooldownRule__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivateCooldownRule__Fields_FWDDECL
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/MeleeComboMove.h>
#endif
#undef IL2CPP_STRUCT_ActivateCooldownRule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateCooldownRule__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivateCooldownRule__Fields_FWDDECL)
#include <Modloader/app/structs/ActivateCooldownRule__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateCooldownRule__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
