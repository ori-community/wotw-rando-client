#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct CleverMenuItem;
struct ActionMethod;
struct ToggleCleverMenuItemLeftRight__Fields {
    struct MonoBehaviour__Fields _;
    struct CleverMenuItemSelectionManager* m_selectionManager;
    struct CleverMenuItem* m_cleverMenuItem;
    struct ActionMethod* LeftAction;
    struct ActionMethod* RightAction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_FWDDECL)
#define IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#endif
#undef IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ToggleCleverMenuItemLeftRight__Fields_FWDDECL)
#include <Modloader/app/structs/ToggleCleverMenuItemLeftRight__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToggleCleverMenuItemLeftRight__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
