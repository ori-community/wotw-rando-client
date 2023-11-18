#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalBrowserWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalBrowserWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalBrowserWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XalBrowserWrapper__Fields_DEFINED
struct GameObject;
struct Browser;
struct MeshRenderer;
struct String;
struct __declspec(align(8)) XalBrowserWrapper__Fields {
    struct GameObject* m_browserPrefab;
    struct GameObject* m_browserPrefabInstance;
    struct Browser* m_browser;
    struct MeshRenderer* m_browserMesh;
    bool m_hitTargetUri;
    void* m_showWebOperationPtr;
    struct String* m_targetUri;
    struct String* m_startUri;
};
#endif
#if !defined(IL2CPP_STRUCT_XalBrowserWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_XalBrowserWrapper__Fields_FWDDECL
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XalBrowserWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalBrowserWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XalBrowserWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/XalBrowserWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalBrowserWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
