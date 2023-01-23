#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MouseButton__Enum_DEFINED)
#define IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_DEFINED
struct MeshCollider;
struct List_1_UnityEngine_Event_;
struct BrowserCursor;
struct BrowserInputSettings;
struct ClickMeshBrowserUI__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshCollider* meshCollider;
    float maxDistance;
    struct List_1_UnityEngine_Event_* keyEvents;
    struct List_1_UnityEngine_Event_* keyEventsLast;
    bool mouseWasOver;
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
#if !defined(IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_FWDDECL
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/BrowserInputSettings.h>
#include <Modloader/app/structs/List_1_UnityEngine_Event_.h>
#include <Modloader/app/structs/MeshCollider.h>
#endif
#undef IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_FWDDECL)
#include <Modloader/app/structs/ClickMeshBrowserUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClickMeshBrowserUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
