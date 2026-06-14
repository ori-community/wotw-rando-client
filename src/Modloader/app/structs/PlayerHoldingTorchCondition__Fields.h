#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/PlayerHoldingTorchCondition_FlameColorType__Enum.h>
#include <Modloader/app/structs/PlayerHoldingTorchCondition_TorchStateType__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition_TorchStateType__Enum_DEFINED) && defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition_FlameColorType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_DEFINED
struct PlayerHoldingTorchCondition__Fields {
    struct Condition_1__Fields _;
    bool IsHolding;
    PlayerHoldingTorchCondition_TorchStateType__Enum TorchStateCheck;

    PlayerHoldingTorchCondition_FlameColorType__Enum FlameColorCheck;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerHoldingTorchCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerHoldingTorchCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
