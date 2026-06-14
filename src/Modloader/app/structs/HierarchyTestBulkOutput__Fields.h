#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_DEFINED)
#include <Modloader/app/structs/HierarchyTestOutputBase_1_HierarchyTestBulkToolData___Fields.h>
#if defined(IL2CPP_STRUCT_HierarchyTestOutputBase_1_HierarchyTestBulkToolData___Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_DEFINED
struct HierarchyTestResultAggregator;
struct String;
struct HierarchyTestBulkOutput__Fields {
    struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___Fields _;
    struct HierarchyTestResultAggregator* m_aggregator;
    struct String* m_fileName;
    struct String* m_fileExtension;
    bool m_headerAdded;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_FWDDECL
#include <Modloader/app/structs/HierarchyTestResultAggregator.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyTestBulkOutput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTestBulkOutput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
