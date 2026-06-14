#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGhostRecorderPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGhostRecorderPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGhostRecorderPlugin_DEFINED)
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_IGhostRecorderPlugin_DEFINED
struct IGhostRecorderPlugin__Class;
struct IGhostRecorderPlugin {
    struct IGhostRecorderPlugin__Class* klass;
    MonitorData* monitor;
    struct IGhostRecorderPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IGhostRecorderPlugin_FWDDECL)
#define IL2CPP_STRUCT_IGhostRecorderPlugin_FWDDECL
#include <Modloader/app/structs/IGhostRecorderPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_IGhostRecorderPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGhostRecorderPlugin_DEFINED) && !defined(IL2CPP_STRUCT_IGhostRecorderPlugin_FWDDECL)
#include <Modloader/app/structs/IGhostRecorderPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGhostRecorderPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
