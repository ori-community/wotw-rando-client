#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInput__Fields_DEFINED)
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MouseButton__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BrowserInput__Fields_DEFINED
struct Browser;
struct List_1_UnityEngine_Event_;
struct BrowserInput_ButtonHistory;
struct __declspec(align(8)) BrowserInput__Fields {
    struct Browser* browser;
    bool kbWasFocused;
    bool mouseWasFocused;
    struct List_1_UnityEngine_Event_* extraEventsToInject;
    MouseButton__Enum prevButtons;

    struct Vector2 prevPos;
    struct BrowserInput_ButtonHistory* leftClickHistory;
    struct Vector2 accumulatedScroll;
    float lastScrollEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_BrowserInput__Fields_FWDDECL
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/BrowserInput_ButtonHistory.h>
#include <Modloader/app/structs/List_1_UnityEngine_Event_.h>
#endif
#undef IL2CPP_STRUCT_BrowserInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BrowserInput__Fields_FWDDECL)
#include <Modloader/app/structs/BrowserInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
