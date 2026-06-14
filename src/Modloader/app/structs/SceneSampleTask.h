#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSampleTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSampleTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSampleTask_DEFINED)
#include <Modloader/app/structs/SceneSampleTask__Fields.h>
#if defined(IL2CPP_STRUCT_SceneSampleTask__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneSampleTask_DEFINED
struct SceneSampleTask__Class;
struct SceneSampleTask {
    struct SceneSampleTask__Class* klass;
    MonitorData* monitor;
    struct SceneSampleTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSampleTask_FWDDECL)
#define IL2CPP_STRUCT_SceneSampleTask_FWDDECL
#include <Modloader/app/structs/SceneSampleTask__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneSampleTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSampleTask_DEFINED) && !defined(IL2CPP_STRUCT_SceneSampleTask_FWDDECL)
#include <Modloader/app/structs/SceneSampleTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSampleTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
