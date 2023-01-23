#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTesterSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTesterSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTesterSettings_DEFINED)
#define IL2CPP_STRUCT_HierarchyTesterSettings_DEFINED
struct HierarchyTesterSettings__Class;
struct HierarchyTesterSettings {
    struct HierarchyTesterSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTesterSettings_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTesterSettings_FWDDECL
#include <Modloader/app/structs/HierarchyTesterSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTesterSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTesterSettings_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTesterSettings_FWDDECL)
#include <Modloader/app/structs/HierarchyTesterSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTesterSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
