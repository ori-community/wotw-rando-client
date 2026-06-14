#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerUIBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerUIBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIBase__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MouseButton__Enum_DEFINED)
#define IL2CPP_STRUCT_PointerUIBase__Fields_DEFINED
struct Action;
struct Camera;
struct KeyEvents;
struct Browser;
struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_;
struct BrowserCursor;
struct BrowserInputSettings;
struct PointerUIBase__Fields {
    struct MonoBehaviour__Fields _;
    float dragMovementThreshold;
    struct Action* onHandlePointers;
    struct Camera* viewCamera;
    bool enableMouseInput;
    bool enableTouchInput;
    bool enableFPSInput;
    bool enableVRInput;
    float maxDistance;
    bool disableMouseEmulation;
    struct KeyEvents* keyEvents;
    struct Browser* browser;
    bool appFocused;
    int32_t currentPointerId;
    struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* currentPointers;
    struct Vector2 mouseDownPosition;
    bool dragging;
    struct Action* onClick;
    int32_t p_currentDown;
    int32_t p_anyDown;
    int32_t p_currentOver;
    int32_t p_anyOver;
    bool mouseWasOver;
    int32_t focusForceCount;
    bool _MouseHasFocus_k__BackingField;
    struct Vector2 _MousePosition_k__BackingField;
    MouseButton__Enum _MouseButtons_k__BackingField;

    struct Vector2 _MouseScroll_k__BackingField;
    bool _KeyboardHasFocus_k__BackingField;
    struct BrowserCursor* _BrowserCursor_k__BackingField;
    struct BrowserInputSettings* _InputSettings_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerUIBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointerUIBase__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/BrowserInputSettings.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/KeyEvents.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_.h>
#endif
#undef IL2CPP_STRUCT_PointerUIBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointerUIBase__Fields_FWDDECL)
#include <Modloader/app/structs/PointerUIBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerUIBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
