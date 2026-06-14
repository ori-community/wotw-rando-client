#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportCommentsContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportCommentsContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportCommentsContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportCommentsContainer__Fields_DEFINED
struct List_1_Moon_Telemetry_Performance_AreaComment_;
struct String;
struct __declspec(align(8)) ReportCommentsContainer__Fields {
    struct List_1_Moon_Telemetry_Performance_AreaComment_* Comments;
    struct String* Raw;
    bool _IsChanged_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ReportCommentsContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReportCommentsContainer__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Telemetry_Performance_AreaComment_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ReportCommentsContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportCommentsContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReportCommentsContainer__Fields_FWDDECL)
#include <Modloader/app/structs/ReportCommentsContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportCommentsContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
