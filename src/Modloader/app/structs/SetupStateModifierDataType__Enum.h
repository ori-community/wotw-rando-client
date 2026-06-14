#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupStateModifierDataType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupStateModifierDataType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifierDataType__Enum_DEFINED)
#define IL2CPP_STRUCT_SetupStateModifierDataType__Enum_DEFINED
enum class SetupStateModifierDataType__Enum : int32_t {
    Undefined = 0x00000000,
    ModifierA = 0x00000001,
    ModifierB = 0x00000002,
    ModifierC = 0x00000003,
    PositionStateModifier = 0x00000004,
    ActivationStateModifier = 0x00000005,
    RotationStateModifier = 0x00000006,
    RigidbodyStateModifier = 0x00000007,
    PhysicalSystemStateModifier = 0x00000008,
    ScaleStateModifier = 0x00000009,
    VerletStructureStateModifier = 0x0000000a,
    PassiveStateModifier = 0x0000000b,
    ColorStateModifierWisps = 0x000000fa,
};
#endif
#if !defined(IL2CPP_STRUCT_SetupStateModifierDataType__Enum_FWDDECL)
#define IL2CPP_STRUCT_SetupStateModifierDataType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SetupStateModifierDataType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifierDataType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SetupStateModifierDataType__Enum_FWDDECL)
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
