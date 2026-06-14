#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIBrowserUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIBrowserUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIBrowserUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MouseButton__Enum_DEFINED)
#define IL2CPP_STRUCT_GUIBrowserUI__Fields_DEFINED
struct RawImage;
struct Browser;
struct List_1_UnityEngine_Event_;
struct BaseRaycaster;
struct RectTransform;
struct BrowserCursor;
struct BrowserInputSettings;
struct GUIBrowserUI__Fields {
    struct MonoBehaviour__Fields _;
    struct RawImage* myImage;
    struct Browser* browser;
    bool enableInput;
    bool autoResize;
    struct List_1_UnityEngine_Event_* keyEvents;
    struct List_1_UnityEngine_Event_* keyEventsLast;
    struct BaseRaycaster* raycaster;
    struct RectTransform* rTransform;
    bool _mouseHasFocus;
    struct Vector2 _MousePosition_k__BackingField;
    MouseButton__Enum _MouseButtons_k__BackingField;

    struct Vector2 _MouseScroll_k__BackingField;
    bool _keyboardHasFocus;
    struct BrowserCursor* _BrowserCursor_k__BackingField;
    struct BrowserInputSettings* _InputSettings_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIBrowserUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUIBrowserUI__Fields_FWDDECL
#include <Modloader/app/structs/BaseRaycaster.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/BrowserInputSettings.h>
#include <Modloader/app/structs/List_1_UnityEngine_Event_.h>
#include <Modloader/app/structs/RawImage.h>
#include <Modloader/app/structs/RectTransform.h>
#endif
#undef IL2CPP_STRUCT_GUIBrowserUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIBrowserUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUIBrowserUI__Fields_FWDDECL)
#include <Modloader/app/structs/GUIBrowserUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIBrowserUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
