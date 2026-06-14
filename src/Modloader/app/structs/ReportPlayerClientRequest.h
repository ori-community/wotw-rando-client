#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportPlayerClientRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportPlayerClientRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerClientRequest_DEFINED)
#include <Modloader/app/structs/ReportPlayerClientRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ReportPlayerClientRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportPlayerClientRequest_DEFINED
struct ReportPlayerClientRequest__Class;
struct ReportPlayerClientRequest {
    struct ReportPlayerClientRequest__Class* klass;
    MonitorData* monitor;
    struct ReportPlayerClientRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportPlayerClientRequest_FWDDECL)
#define IL2CPP_STRUCT_ReportPlayerClientRequest_FWDDECL
#include <Modloader/app/structs/ReportPlayerClientRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ReportPlayerClientRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerClientRequest_DEFINED) && !defined(IL2CPP_STRUCT_ReportPlayerClientRequest_FWDDECL)
#include <Modloader/app/structs/ReportPlayerClientRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportPlayerClientRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
