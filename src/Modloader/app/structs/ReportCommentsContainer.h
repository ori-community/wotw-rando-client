#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportCommentsContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportCommentsContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportCommentsContainer_DEFINED)
#include <Modloader/app/structs/ReportCommentsContainer__Fields.h>
#if defined(IL2CPP_STRUCT_ReportCommentsContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportCommentsContainer_DEFINED
struct ReportCommentsContainer__Class;
struct ReportCommentsContainer {
    struct ReportCommentsContainer__Class* klass;
    MonitorData* monitor;
    struct ReportCommentsContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportCommentsContainer_FWDDECL)
#define IL2CPP_STRUCT_ReportCommentsContainer_FWDDECL
#include <Modloader/app/structs/ReportCommentsContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_ReportCommentsContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportCommentsContainer_DEFINED) && !defined(IL2CPP_STRUCT_ReportCommentsContainer_FWDDECL)
#include <Modloader/app/structs/ReportCommentsContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportCommentsContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
