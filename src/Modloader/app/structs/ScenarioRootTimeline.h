#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioRootTimeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioRootTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioRootTimeline_DEFINED)
#include <Modloader/app/structs/ScenarioRootTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_ScenarioRootTimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenarioRootTimeline_DEFINED
struct ScenarioRootTimeline__Class;
struct ScenarioRootTimeline {
    struct ScenarioRootTimeline__Class* klass;
    MonitorData* monitor;
    struct ScenarioRootTimeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenarioRootTimeline_FWDDECL)
#define IL2CPP_STRUCT_ScenarioRootTimeline_FWDDECL
#include <Modloader/app/structs/ScenarioRootTimeline__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenarioRootTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioRootTimeline_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioRootTimeline_FWDDECL)
#include <Modloader/app/structs/ScenarioRootTimeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioRootTimeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
