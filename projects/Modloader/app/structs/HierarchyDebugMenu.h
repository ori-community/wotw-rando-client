#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyDebugMenu_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyDebugMenu_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu_DEFINED)
#include <Modloader/app/structs/HierarchyDebugMenu__Fields.h>
#if defined(IL2CPP_STRUCT_HierarchyDebugMenu__Fields_DEFINED)
#define IL2CPP_STRUCT_HierarchyDebugMenu_DEFINED
struct HierarchyDebugMenu__Class;
struct HierarchyDebugMenu {
    struct HierarchyDebugMenu__Class* klass;
    MonitorData* monitor;
    struct HierarchyDebugMenu__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu_FWDDECL)
#define IL2CPP_STRUCT_HierarchyDebugMenu_FWDDECL
#include <Modloader/app/structs/HierarchyDebugMenu__Class.h>
#endif
#undef IL2CPP_STRUCT_HierarchyDebugMenu_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyDebugMenu_FWDDECL)
#include <Modloader/app/structs/HierarchyDebugMenu.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyDebugMenu.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
