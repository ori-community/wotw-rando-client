#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_DEFINED)
#include <Modloader/app/structs/HierarchyTestResultAggregator_AggregationType__Enum.h>
#if defined(IL2CPP_STRUCT_HierarchyTestResultAggregator_AggregationType__Enum_DEFINED)
#define IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_DEFINED
struct SceneTestData;
struct HPerfTestResult__Array;
struct __declspec(align(8)) HierarchyTestResultAggregator__Fields {
    struct SceneTestData* m_data;
    int32_t m_samplesCount;
    struct HPerfTestResult__Array* m_objectTempSamples;
    HierarchyTestResultAggregator_AggregationType__Enum m_aggregationType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_FWDDECL
#include <Modloader/app/structs/HPerfTestResult__Array.h>
#include <Modloader/app/structs/SceneTestData.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTestResultAggregator__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyTestResultAggregator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTestResultAggregator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
