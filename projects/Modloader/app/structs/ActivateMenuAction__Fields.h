#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateMenuAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateMenuAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateMenuAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateMenuAction__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct ActivateMenuAction__Fields {
    struct ActionMethod__Fields _;
    struct CleverMenuItemSelectionManager* Target;
    bool Activate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateMenuAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivateMenuAction__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#endif
#undef IL2CPP_STRUCT_ActivateMenuAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateMenuAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivateMenuAction__Fields_FWDDECL)
#include <Modloader/app/structs/ActivateMenuAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateMenuAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
