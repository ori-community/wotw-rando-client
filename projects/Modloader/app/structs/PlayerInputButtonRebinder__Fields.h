#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_DEFINED
struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_;
struct Dictionary_2_Core_Input_Command_AbilityType_;
struct Dictionary_2_AbilityType_Core_Input_Command_;
struct Dictionary_2_Core_Input_Command_System_Int32_;
struct PlayerInputButtonRebinder__Fields {
    struct GuidOwner__Fields _;
    struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_* Blocks;
    struct Dictionary_2_Core_Input_Command_AbilityType_* m_buttonAbilityOverrideMap;
    struct Dictionary_2_AbilityType_Core_Input_Command_* m_abilityToButtonOverrideMap;
    struct Dictionary_2_Core_Input_Command_System_Int32_* m_buttonBlockingMap;
    struct Dictionary_2_Core_Input_Command_AbilityType_* m_buttonAbilityMap;
    struct Dictionary_2_AbilityType_Core_Input_Command_* m_abilityButtonMap;
    bool AbilitiesBindingsDirty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_AbilityType_Core_Input_Command_.h>
#include <Modloader/app/structs/Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_.h>
#include <Modloader/app/structs/Dictionary_2_Core_Input_Command_AbilityType_.h>
#include <Modloader/app/structs/Dictionary_2_Core_Input_Command_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerInputButtonRebinder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInputButtonRebinder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
