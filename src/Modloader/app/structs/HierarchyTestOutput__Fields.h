#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTestOutput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTestOutput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestOutput__Fields_DEFINED)
#include <Modloader/app/structs/HierarchyTestOutputBase_1_SceneTestData___Fields.h>
#if defined(IL2CPP_STRUCT_HierarchyTestOutputBase_1_SceneTestData___Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyTestOutput__Fields_DEFINED
struct HierarchyTestResultAggregator;
struct HierarchyTestOutput__Fields {
    struct HierarchyTestOutputBase_1_SceneTestData___Fields _;
    struct HierarchyTestResultAggregator* m_aggregator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTestOutput__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTestOutput__Fields_FWDDECL
#include <Modloader/app/structs/HierarchyTestResultAggregator.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTestOutput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestOutput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTestOutput__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyTestOutput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTestOutput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
