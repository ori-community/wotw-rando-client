#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HUDManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HUDManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HUDManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HUDManager__Fields_DEFINED
struct PointerUIGUI;
struct Browser;
struct HUDManager__Fields {
    struct MonoBehaviour__Fields _;
    bool haveMouse;
    struct PointerUIGUI* hud;
    struct Browser* _HUDBrowser_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HUDManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_HUDManager__Fields_FWDDECL
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/PointerUIGUI.h>
#endif
#undef IL2CPP_STRUCT_HUDManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HUDManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HUDManager__Fields_FWDDECL)
#include <Modloader/app/structs/HUDManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HUDManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
