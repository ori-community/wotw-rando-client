#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#if defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ComboMoveType__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_DEFINED
struct List_1_Moon_ComboSystem_IComboMove_;
struct __declspec(align(8)) SeinComboHandler_StubbedComboMove__Fields {
    struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
    AbilityType__Enum _ComboAbilityType_k__BackingField;

    float _ProviderCooldown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    bool _MoveHasFinished_k__BackingField;
    ComboMoveType__Enum _ComboMoveType_k__BackingField;

    bool _IsAttackButtonDown_k__BackingField;
    bool _OnAttackButtonPressed_k__BackingField;
    bool _OnAttackButtonReleased_k__BackingField;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    bool _WasGroundedSinceLastExecution_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#endif
#undef IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinComboHandler_StubbedComboMove__Fields_FWDDECL)
#include <Modloader/app/structs/SeinComboHandler_StubbedComboMove__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinComboHandler_StubbedComboMove__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
