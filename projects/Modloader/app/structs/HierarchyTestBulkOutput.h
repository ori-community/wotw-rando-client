#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTestBulkOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTestBulkOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkOutput_DEFINED)
#include <Modloader/app/structs/HierarchyTestBulkOutput__Fields.h>
#if defined(IL2CPP_STRUCT_HierarchyTestBulkOutput__Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyTestBulkOutput_DEFINED
struct HierarchyTestBulkOutput__Class;
struct HierarchyTestBulkOutput {
    struct HierarchyTestBulkOutput__Class* klass;
    MonitorData* monitor;
    struct HierarchyTestBulkOutput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkOutput_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTestBulkOutput_FWDDECL
#include <Modloader/app/structs/HierarchyTestBulkOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTestBulkOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkOutput_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTestBulkOutput_FWDDECL)
#include <Modloader/app/structs/HierarchyTestBulkOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTestBulkOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
