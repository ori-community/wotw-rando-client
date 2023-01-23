#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTestOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTestOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestOutput_DEFINED)
#include <Modloader/app/structs/HierarchyTestOutput__Fields.h>
#if defined(IL2CPP_STRUCT_HierarchyTestOutput__Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyTestOutput_DEFINED
struct HierarchyTestOutput__Class;
struct HierarchyTestOutput {
    struct HierarchyTestOutput__Class* klass;
    MonitorData* monitor;
    struct HierarchyTestOutput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTestOutput_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTestOutput_FWDDECL
#include <Modloader/app/structs/HierarchyTestOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTestOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestOutput_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTestOutput_FWDDECL)
#include <Modloader/app/structs/HierarchyTestOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTestOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
