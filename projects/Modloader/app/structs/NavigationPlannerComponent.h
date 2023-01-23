#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavigationPlannerComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavigationPlannerComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigationPlannerComponent_DEFINED)
#include <Modloader/app/structs/NavigationPlannerComponent__Fields.h>
#if defined(IL2CPP_STRUCT_NavigationPlannerComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_NavigationPlannerComponent_DEFINED
struct NavigationPlannerComponent__Class;
struct NavigationPlannerComponent {
    struct NavigationPlannerComponent__Class* klass;
    MonitorData* monitor;
    struct NavigationPlannerComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavigationPlannerComponent_FWDDECL)
#define IL2CPP_STRUCT_NavigationPlannerComponent_FWDDECL
#include <Modloader/app/structs/NavigationPlannerComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_NavigationPlannerComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigationPlannerComponent_DEFINED) && !defined(IL2CPP_STRUCT_NavigationPlannerComponent_FWDDECL)
#include <Modloader/app/structs/NavigationPlannerComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavigationPlannerComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
