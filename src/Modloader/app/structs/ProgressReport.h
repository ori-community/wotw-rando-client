#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProgressReport_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProgressReport_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProgressReport_DEFINED)
#include <Modloader/app/structs/ProgressReport__Fields.h>
#if defined(IL2CPP_STRUCT_ProgressReport__Fields_DEFINED)
#define IL2CPP_STRUCT_ProgressReport_DEFINED
struct ProgressReport__Class;
struct ProgressReport {
    struct ProgressReport__Class* klass;
    MonitorData* monitor;
    struct ProgressReport__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProgressReport_FWDDECL)
#define IL2CPP_STRUCT_ProgressReport_FWDDECL
#include <Modloader/app/structs/ProgressReport__Class.h>
#endif
#undef IL2CPP_STRUCT_ProgressReport_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProgressReport_DEFINED) && !defined(IL2CPP_STRUCT_ProgressReport_FWDDECL)
#include <Modloader/app/structs/ProgressReport.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProgressReport.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
