#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportPlayerClientResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportPlayerClientResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerClientResult_DEFINED)
#include <Modloader/app/structs/ReportPlayerClientResult__Fields.h>
#if defined(IL2CPP_STRUCT_ReportPlayerClientResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportPlayerClientResult_DEFINED
struct ReportPlayerClientResult__Class;
struct ReportPlayerClientResult {
    struct ReportPlayerClientResult__Class* klass;
    MonitorData* monitor;
    struct ReportPlayerClientResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportPlayerClientResult_FWDDECL)
#define IL2CPP_STRUCT_ReportPlayerClientResult_FWDDECL
#include <Modloader/app/structs/ReportPlayerClientResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ReportPlayerClientResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerClientResult_DEFINED) && !defined(IL2CPP_STRUCT_ReportPlayerClientResult_FWDDECL)
#include <Modloader/app/structs/ReportPlayerClientResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportPlayerClientResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
