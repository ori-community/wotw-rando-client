#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTester_DEFINED)
#include <Modloader/app/structs/HierarchyTester__Fields.h>
#if defined(IL2CPP_STRUCT_HierarchyTester__Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyTester_DEFINED
struct HierarchyTester__Class;
struct HierarchyTester {
    struct HierarchyTester__Class* klass;
    MonitorData* monitor;
    struct HierarchyTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTester_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTester_FWDDECL
#include <Modloader/app/structs/HierarchyTester__Class.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTester_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTester_FWDDECL)
#include <Modloader/app/structs/HierarchyTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
