#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportPlayerServerRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportPlayerServerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerServerRequest_DEFINED)
#include <Modloader/app/structs/ReportPlayerServerRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ReportPlayerServerRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportPlayerServerRequest_DEFINED
struct ReportPlayerServerRequest__Class;
struct ReportPlayerServerRequest {
    struct ReportPlayerServerRequest__Class* klass;
    MonitorData* monitor;
    struct ReportPlayerServerRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportPlayerServerRequest_FWDDECL)
#define IL2CPP_STRUCT_ReportPlayerServerRequest_FWDDECL
#include <Modloader/app/structs/ReportPlayerServerRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ReportPlayerServerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerServerRequest_DEFINED) && !defined(IL2CPP_STRUCT_ReportPlayerServerRequest_FWDDECL)
#include <Modloader/app/structs/ReportPlayerServerRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportPlayerServerRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
