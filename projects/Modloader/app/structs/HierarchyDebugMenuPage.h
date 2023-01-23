#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenuPage_DEFINED)
#include <Modloader/app/structs/HierarchyDebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_HierarchyDebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyDebugMenuPage_DEFINED
struct HierarchyDebugMenuPage__Class;
struct HierarchyDebugMenuPage {
    struct HierarchyDebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct HierarchyDebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_HierarchyDebugMenuPage_FWDDECL
#include <Modloader/app/structs/HierarchyDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_HierarchyDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/HierarchyDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
