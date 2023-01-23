#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapDebugNavigation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapDebugNavigation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapDebugNavigation_DEFINED)
#include <Modloader/app/structs/AreaMapDebugNavigation__Fields.h>
#if defined(IL2CPP_STRUCT_AreaMapDebugNavigation__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapDebugNavigation_DEFINED
struct AreaMapDebugNavigation__Class;
struct AreaMapDebugNavigation {
    struct AreaMapDebugNavigation__Class* klass;
    MonitorData* monitor;
    struct AreaMapDebugNavigation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapDebugNavigation_FWDDECL)
#define IL2CPP_STRUCT_AreaMapDebugNavigation_FWDDECL
#include <Modloader/app/structs/AreaMapDebugNavigation__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaMapDebugNavigation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapDebugNavigation_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapDebugNavigation_FWDDECL)
#include <Modloader/app/structs/AreaMapDebugNavigation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapDebugNavigation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
