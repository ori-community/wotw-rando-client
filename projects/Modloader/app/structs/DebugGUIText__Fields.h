#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugGUIText__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugGUIText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugGUIText__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugGUIText__Fields_DEFINED
struct GUIStyle;
struct RuntimeBuildInformation;
struct String;
struct SceneRoot;
struct DebugGUIText__Fields {
    struct MonoBehaviour__Fields _;
    bool m_imguiRegistered;
    struct GUIStyle* m_style;
    struct RuntimeBuildInformation* m_buildInfo;
    struct String* m_buildInfoString;
    struct SceneRoot* m_sceneRoot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugGUIText__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugGUIText__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/RuntimeBuildInformation.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugGUIText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugGUIText__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugGUIText__Fields_FWDDECL)
#include <Modloader/app/structs/DebugGUIText__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugGUIText__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
