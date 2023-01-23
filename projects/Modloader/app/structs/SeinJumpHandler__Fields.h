#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinJumpHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinJumpHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJumpHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinJumpHandler__Fields_DEFINED
struct CharacterState;
struct List_1_Moon_ComboSystem_IComboMove_;
struct __declspec(align(8)) SeinJumpHandler__Fields {
    bool m_isBlindForest;
    struct CharacterState* m_lastJumpExecuted;
    struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
    float _ProviderCooldown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    bool _WasGroundedSinceLastExecution_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinJumpHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinJumpHandler__Fields_FWDDECL
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#endif
#undef IL2CPP_STRUCT_SeinJumpHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJumpHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinJumpHandler__Fields_FWDDECL)
#include <Modloader/app/structs/SeinJumpHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinJumpHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
