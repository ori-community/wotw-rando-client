#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RacePauseScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RacePauseScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacePauseScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_RacePauseScreen__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct GameObject;
struct RacePauseScreen__Fields {
    struct MenuScreen__Fields _;
    struct CleverMenuItemSelectionManager* NavigationManager;
    struct GameObject* Fader;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RacePauseScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_RacePauseScreen__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_RacePauseScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacePauseScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RacePauseScreen__Fields_FWDDECL)
#include <Modloader/app/structs/RacePauseScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RacePauseScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
