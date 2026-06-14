#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRMainControlPanel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRMainControlPanel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRMainControlPanel__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VRMainControlPanel__Fields_DEFINED
struct GameObject;
struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_;
struct ExternalKeyboard;
struct VRBrowserPanel;
struct VRMainControlPanel__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* browserPrefab;
    float moveSpeed;
    float height;
    float radius;
    int32_t browsersToFit;
    struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* allBrowsers;
    struct ExternalKeyboard* keyboard;
    struct Vector3 baseKeyboardScale;
    struct VRBrowserPanel* keyboardTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRMainControlPanel__Fields_FWDDECL)
#define IL2CPP_STRUCT_VRMainControlPanel__Fields_FWDDECL
#include <Modloader/app/structs/ExternalKeyboard.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_.h>
#include <Modloader/app/structs/VRBrowserPanel.h>
#endif
#undef IL2CPP_STRUCT_VRMainControlPanel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRMainControlPanel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VRMainControlPanel__Fields_FWDDECL)
#include <Modloader/app/structs/VRMainControlPanel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRMainControlPanel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
