#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionsScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionsScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionsScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_MenuTabBackground__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_OptionsScreen__Fields_DEFINED
struct Action;
struct CleverMenuItemSelectionManager;
struct OptionsScreen__Fields {
    struct MenuScreen__Fields _;
    MenuTabBackground__Enum m_backgroundMode;

    struct Action* OnRefreshCallback;
    bool m_optionsScreenNeedRefresh;
    struct CleverMenuItemSelectionManager* Navigation;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OptionsScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_OptionsScreen__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#endif
#undef IL2CPP_STRUCT_OptionsScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionsScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OptionsScreen__Fields_FWDDECL)
#include <Modloader/app/structs/OptionsScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionsScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
