#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportPlayerServerResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportPlayerServerResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerServerResult_DEFINED)
#include <Modloader/app/structs/ReportPlayerServerResult__Fields.h>
#if defined(IL2CPP_STRUCT_ReportPlayerServerResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportPlayerServerResult_DEFINED
struct ReportPlayerServerResult__Class;
struct ReportPlayerServerResult {
    struct ReportPlayerServerResult__Class* klass;
    MonitorData* monitor;
    struct ReportPlayerServerResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportPlayerServerResult_FWDDECL)
#define IL2CPP_STRUCT_ReportPlayerServerResult_FWDDECL
#include <Modloader/app/structs/ReportPlayerServerResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ReportPlayerServerResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerServerResult_DEFINED) && !defined(IL2CPP_STRUCT_ReportPlayerServerResult_FWDDECL)
#include <Modloader/app/structs/ReportPlayerServerResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportPlayerServerResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
