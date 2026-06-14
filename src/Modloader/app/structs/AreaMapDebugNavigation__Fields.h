#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_DEFINED
struct GameObject;
struct MessageBox;
struct AreaMapUI;
struct RuntimeSceneMetaData;
struct AreaMapDebugNavigation__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* DebugSceneBoundsMarkerPrefab;
    float HiddenColorAlpha;
    float UndiscoveredColorAlpha;
    struct MessageBox* DebugText;
    struct AreaMapUI* m_areaMapUi;
    struct RuntimeSceneMetaData* m_currentScene;
    struct GameObject* m_sceneBoundsMarker;
    bool m_debugModeEnabled;
    bool UndiscoveredMapVisible;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_FWDDECL
#include <Modloader/app/structs/AreaMapUI.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapDebugNavigation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapDebugNavigation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
