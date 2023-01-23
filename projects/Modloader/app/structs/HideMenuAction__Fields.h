#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HideMenuAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HideMenuAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideMenuAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_MenuTabBackground__Enum_DEFINED)
#define IL2CPP_STRUCT_HideMenuAction__Fields_DEFINED
struct List_1_LegacyTransparencyAnimator_;
struct LegacyTransparencyAnimator;
struct HideMenuAction__Fields {
    struct ActionMethod__Fields _;
    bool Hide;
    bool RunOnDisable;
    struct List_1_LegacyTransparencyAnimator_* ItemsToHide;
    struct LegacyTransparencyAnimator* ExternalTransparencyAnimator;
    float m_backgroundFadeTimer;
    MenuTabBackground__Enum m_originalBackgroundMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HideMenuAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_HideMenuAction__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_LegacyTransparencyAnimator_.h>
#endif
#undef IL2CPP_STRUCT_HideMenuAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideMenuAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HideMenuAction__Fields_FWDDECL)
#include <Modloader/app/structs/HideMenuAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HideMenuAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
