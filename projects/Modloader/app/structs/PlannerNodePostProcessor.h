#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlannerNodePostProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlannerNodePostProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlannerNodePostProcessor_DEFINED)
#include <Modloader/app/structs/PlannerNodePostProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_PlannerNodePostProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_PlannerNodePostProcessor_DEFINED
struct PlannerNodePostProcessor__Class;
struct PlannerNodePostProcessor {
    struct PlannerNodePostProcessor__Class* klass;
    MonitorData* monitor;
    struct PlannerNodePostProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlannerNodePostProcessor_FWDDECL)
#define IL2CPP_STRUCT_PlannerNodePostProcessor_FWDDECL
#include <Modloader/app/structs/PlannerNodePostProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_PlannerNodePostProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlannerNodePostProcessor_DEFINED) && !defined(IL2CPP_STRUCT_PlannerNodePostProcessor_FWDDECL)
#include <Modloader/app/structs/PlannerNodePostProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlannerNodePostProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
