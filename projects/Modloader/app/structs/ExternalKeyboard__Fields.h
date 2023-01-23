#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExternalKeyboard__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExternalKeyboard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalKeyboard__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ExternalKeyboard__Fields_DEFINED
struct Browser;
struct PointerUIBase;
struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_;
struct ExternalKeyboard__Fields {
    struct MonoBehaviour__Fields _;
    bool automaticFocus;
    struct Browser* initialBrowser;
    bool hideWhenUnneeded;
    struct PointerUIBase* activeBrowserUI;
    struct Browser* keyboardBrowser;
    bool forcingFocus;
    struct Browser* _activeBrowser;
    struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_* onFocusChange;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExternalKeyboard__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExternalKeyboard__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/PointerUIBase.h>
#endif
#undef IL2CPP_STRUCT_ExternalKeyboard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalKeyboard__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExternalKeyboard__Fields_FWDDECL)
#include <Modloader/app/structs/ExternalKeyboard__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExternalKeyboard__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
