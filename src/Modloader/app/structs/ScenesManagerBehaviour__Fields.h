#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_DEFINED
struct ScenesManagerContext;
struct List_1_UnityEngine_Vector3_;
struct List_1_Moon_IRectProvider_;
struct List_1_System_Int32_;
struct List_1_SceneOperation_;
struct __declspec(align(8)) ScenesManagerBehaviour__Fields {
    struct ScenesManagerContext* m_context;
    struct List_1_UnityEngine_Vector3_* m_cameraPositions;
    struct Vector2 m_lastCameraPosition;
    struct List_1_Moon_IRectProvider_* m_tempRectProviderList;
    struct List_1_System_Int32_* m_tempHashList;
    struct List_1_SceneOperation_* m_sceneOperationsEnable;
    struct List_1_SceneOperation_* m_sceneOperationsLoad;
    struct List_1_SceneOperation_* m_sceneOperationsUnload;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_IRectProvider_.h>
#include <Modloader/app/structs/List_1_SceneOperation_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/ScenesManagerContext.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/ScenesManagerBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
