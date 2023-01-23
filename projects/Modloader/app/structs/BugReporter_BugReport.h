#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReporter_BugReport_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReporter_BugReport_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_BugReport_DEFINED)
#include <Modloader/app/structs/BugReporter_BugReport__Fields.h>
#if defined(IL2CPP_STRUCT_BugReporter_BugReport__Fields_DEFINED)
#define IL2CPP_STRUCT_BugReporter_BugReport_DEFINED
struct BugReporter_BugReport__Class;
struct BugReporter_BugReport {
    struct BugReporter_BugReport__Class* klass;
    MonitorData* monitor;
    struct BugReporter_BugReport__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BugReporter_BugReport_FWDDECL)
#define IL2CPP_STRUCT_BugReporter_BugReport_FWDDECL
#include <Modloader/app/structs/BugReporter_BugReport__Class.h>
#endif
#undef IL2CPP_STRUCT_BugReporter_BugReport_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_BugReport_DEFINED) && !defined(IL2CPP_STRUCT_BugReporter_BugReport_FWDDECL)
#include <Modloader/app/structs/BugReporter_BugReport.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReporter_BugReport.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
