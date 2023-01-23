#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_DEFINED
struct SceneTestData;
struct HierarchyPerformanceTester_Old_HPerfTestResultComparer;
struct String;
struct __declspec(align(8)) HierarchyTestOutputBase_1_SceneTestData___Fields {
    struct SceneTestData* m_data;
    struct HierarchyPerformanceTester_Old_HPerfTestResultComparer* m_comparer;
    struct String* m_lastSavedPath;
};
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_FWDDECL
#include <Modloader/app/structs/HierarchyPerformanceTester_Old_HPerfTestResultComparer.h>
#include <Modloader/app/structs/SceneTestData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyTestOutputBase_1_SceneTestData___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTestOutputBase_1_SceneTestData___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
