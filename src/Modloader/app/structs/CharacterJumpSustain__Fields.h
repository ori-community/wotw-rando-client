#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterJumpSustain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterJumpSustain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterJumpSustain__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterJumpSustain__Fields_DEFINED
struct PlatformBehaviour;
struct CharacterJumpSustain__Fields {
    struct CharacterState__Fields _;
    float JumpStopDeceleration;
    float JumpStopDecelerationMultiplier;
    struct PlatformBehaviour* PlatformBehaviour;
    float m_amountOfSpeedToLose;
    bool m_DisableSustainForThisJump;
    float m_forceSustainForThisJump;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterJumpSustain__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterJumpSustain__Fields_FWDDECL
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CharacterJumpSustain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterJumpSustain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterJumpSustain__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterJumpSustain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterJumpSustain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
