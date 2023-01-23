#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneInspector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneInspector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneInspector__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_SceneInspector__Fields_DEFINED
struct Material;
struct List_1_Moon_IRectProvider_;
struct HashSet_1_RuntimeSceneMetaData_;
struct RuntimeSceneMetaData;
struct SceneInspector__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_lastScreenWidth;
    int32_t m_lastScreenHeight;
    struct Rect m_displayRect;
    struct Material* m_material;
    struct Rect m_worldBounds;
    struct List_1_Moon_IRectProvider_* m_tempRectProviderList;
    struct Rect m_lastQuery;
    struct HashSet_1_RuntimeSceneMetaData_* m_tempMetaDataSet;
    struct RuntimeSceneMetaData* m_lastQueryScene;
    int32_t m_querySize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneInspector__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneInspector__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_Moon_IRectProvider_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_SceneInspector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneInspector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneInspector__Fields_FWDDECL)
#include <Modloader/app/structs/SceneInspector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneInspector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
