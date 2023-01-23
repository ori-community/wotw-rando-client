#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_DEFINED
struct String;
struct PlayerInputRebinding_KeyBindingSettings;
struct Int32__Array;
struct XboxControllerInput_Button__Enum__Array;
struct PlayerInputRebinding__StaticFields {
    struct String* keyRebindingFileName;
    struct String* controllerRebindingFileName;
    bool USE_NEW_BINDINGS_TEST;
    bool DEBUG_CONTROLS_ENABLED;
    struct PlayerInputRebinding_KeyBindingSettings* m_keyRebindings;
    struct Int32__Array* m_controllerButtonRemappings;
    bool m_controllerIsRemappingButtons;
    bool m_hasReadControllerRemappingsFile;
    struct XboxControllerInput_Button__Enum__Array* intToButton;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/PlayerInputRebinding_KeyBindingSettings.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XboxControllerInput_Button__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInputRebinding__StaticFields_FWDDECL)
#include <Modloader/app/structs/PlayerInputRebinding__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInputRebinding__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
