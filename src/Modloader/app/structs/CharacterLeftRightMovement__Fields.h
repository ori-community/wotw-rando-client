#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_DEFINED
struct HorizontalPlatformMovementSettings;
struct PlatformBehaviour;
struct CharacterLeftRightMovement_PreDashDelegateType;
struct Action;
struct ICharacterTurningHandler;
struct Action_1_HorizontalPlatformMovementSettings_;
struct CharacterLeftRightMovement__Fields {
    struct CharacterState__Fields _;
    struct HorizontalPlatformMovementSettings* m_settings;
    struct PlatformBehaviour* PlatformBehaviour;
    struct HorizontalPlatformMovementSettings* Settings;
    bool UpdateFacingDirection;
    struct CharacterLeftRightMovement_PreDashDelegateType* OnSetTurningHandler;
    struct Action* OnPreTurningHandlerTurn;
    float m_horizontalInput;
    struct ICharacterTurningHandler* m_turningHandler;
    int32_t m_framesLeftBeforeResetingTurningHandler;
    struct Action_1_HorizontalPlatformMovementSettings_* ModifyHorizontalPlatformMovementSettingsEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_HorizontalPlatformMovementSettings_.h>
#include <Modloader/app/structs/CharacterLeftRightMovement_PreDashDelegateType.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/ICharacterTurningHandler.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterLeftRightMovement__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterLeftRightMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterLeftRightMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
