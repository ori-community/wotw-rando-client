#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReporter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_DEFINED)
#include <Modloader/app/structs/BugReporter__Fields.h>
#if defined(IL2CPP_STRUCT_BugReporter__Fields_DEFINED)
#define IL2CPP_STRUCT_BugReporter_DEFINED
struct BugReporter__Class;
struct BugReporter {
    struct BugReporter__Class* klass;
    MonitorData* monitor;
    struct BugReporter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BugReporter_FWDDECL)
#define IL2CPP_STRUCT_BugReporter_FWDDECL
#include <Modloader/app/structs/BugReporter__Class.h>
#endif
#undef IL2CPP_STRUCT_BugReporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_DEFINED) && !defined(IL2CPP_STRUCT_BugReporter_FWDDECL)
#include <Modloader/app/structs/BugReporter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReporter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
