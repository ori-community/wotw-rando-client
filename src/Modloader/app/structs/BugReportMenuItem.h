#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReportMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReportMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReportMenuItem_DEFINED)
#include <Modloader/app/structs/BugReportMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_BugReportMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_BugReportMenuItem_DEFINED
struct BugReportMenuItem__Class;
struct BugReportMenuItem {
    struct BugReportMenuItem__Class* klass;
    MonitorData* monitor;
    struct BugReportMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BugReportMenuItem_FWDDECL)
#define IL2CPP_STRUCT_BugReportMenuItem_FWDDECL
#include <Modloader/app/structs/BugReportMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_BugReportMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReportMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_BugReportMenuItem_FWDDECL)
#include <Modloader/app/structs/BugReportMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReportMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
