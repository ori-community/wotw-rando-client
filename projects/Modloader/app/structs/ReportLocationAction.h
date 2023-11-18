#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportLocationAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportLocationAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportLocationAction_DEFINED)
#include <Modloader/app/structs/ReportLocationAction__Fields.h>
#if defined(IL2CPP_STRUCT_ReportLocationAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportLocationAction_DEFINED
struct ReportLocationAction__Class;
struct ReportLocationAction {
    struct ReportLocationAction__Class* klass;
    MonitorData* monitor;
    struct ReportLocationAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportLocationAction_FWDDECL)
#define IL2CPP_STRUCT_ReportLocationAction_FWDDECL
#include <Modloader/app/structs/ReportLocationAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ReportLocationAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportLocationAction_DEFINED) && !defined(IL2CPP_STRUCT_ReportLocationAction_FWDDECL)
#include <Modloader/app/structs/ReportLocationAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportLocationAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
