#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchySuspensionTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchySuspensionTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchySuspensionTest_DEFINED)
#include <Modloader/app/structs/HierarchySuspensionTest__Fields.h>
#if defined(IL2CPP_STRUCT_HierarchySuspensionTest__Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchySuspensionTest_DEFINED
struct HierarchySuspensionTest__Class;
struct HierarchySuspensionTest {
    struct HierarchySuspensionTest__Class* klass;
    MonitorData* monitor;
    struct HierarchySuspensionTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchySuspensionTest_FWDDECL)
#define IL2CPP_STRUCT_HierarchySuspensionTest_FWDDECL
#include <Modloader/app/structs/HierarchySuspensionTest__Class.h>
#endif
#undef IL2CPP_STRUCT_HierarchySuspensionTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchySuspensionTest_DEFINED) && !defined(IL2CPP_STRUCT_HierarchySuspensionTest_FWDDECL)
#include <Modloader/app/structs/HierarchySuspensionTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchySuspensionTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
