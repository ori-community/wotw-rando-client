#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportMetadata_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportMetadata_DEFINED)
#include <Modloader/app/structs/ReportMetadata__Fields.h>
#if defined(IL2CPP_STRUCT_ReportMetadata__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportMetadata_DEFINED
struct ReportMetadata__Class;
struct ReportMetadata {
    struct ReportMetadata__Class* klass;
    MonitorData* monitor;
    struct ReportMetadata__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportMetadata_FWDDECL)
#define IL2CPP_STRUCT_ReportMetadata_FWDDECL
#include <Modloader/app/structs/ReportMetadata__Class.h>
#endif
#undef IL2CPP_STRUCT_ReportMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportMetadata_DEFINED) && !defined(IL2CPP_STRUCT_ReportMetadata_FWDDECL)
#include <Modloader/app/structs/ReportMetadata.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportMetadata.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
