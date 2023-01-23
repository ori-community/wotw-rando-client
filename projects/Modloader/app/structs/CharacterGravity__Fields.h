#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterGravity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterGravity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterGravity__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterGravity__Fields_DEFINED
struct GravityPlatformMovementSettings;
struct PlatformBehaviour;
struct Action_1_GravityPlatformMovementSettings_;
struct CharacterGravity__Fields {
    struct CharacterState__Fields _;
    struct GravityPlatformMovementSettings* m_settings;
    struct PlatformBehaviour* PlatformBehaviour;
    struct GravityPlatformMovementSettings* Settings;
    struct Action_1_GravityPlatformMovementSettings_* ModifyGravityPlatformMovementSettingsEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterGravity__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterGravity__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_GravityPlatformMovementSettings_.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CharacterGravity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterGravity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterGravity__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterGravity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterGravity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
