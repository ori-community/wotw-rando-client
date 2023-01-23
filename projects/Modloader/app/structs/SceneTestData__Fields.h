#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneTestData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneTestData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTestData__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneTestData__Fields_DEFINED
struct SceneMetaData;
struct HierarchyDebugMenu_GameObjectItem;
struct List_1_Moon_HierarchyPerformanceTest_SceneSample_;
struct __declspec(align(8)) SceneTestData__Fields {
    struct SceneMetaData* SceneMetaData;
    struct HierarchyDebugMenu_GameObjectItem* Root;
    struct List_1_Moon_HierarchyPerformanceTest_SceneSample_* Samples;
    float ScanningTime;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneTestData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneTestData__Fields_FWDDECL
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/List_1_Moon_HierarchyPerformanceTest_SceneSample_.h>
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_SceneTestData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTestData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneTestData__Fields_FWDDECL)
#include <Modloader/app/structs/SceneTestData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneTestData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
