#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioRecorderTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioRecorderTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioRecorderTracker_DEFINED)
#define IL2CPP_STRUCT_ScenarioRecorderTracker_DEFINED
struct ScenarioRecorderTracker__Class;
struct ScenarioRecorderTracker {
    struct ScenarioRecorderTracker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ScenarioRecorderTracker_FWDDECL)
#define IL2CPP_STRUCT_ScenarioRecorderTracker_FWDDECL
#include <Modloader/app/structs/ScenarioRecorderTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenarioRecorderTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioRecorderTracker_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioRecorderTracker_FWDDECL)
#include <Modloader/app/structs/ScenarioRecorderTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioRecorderTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
