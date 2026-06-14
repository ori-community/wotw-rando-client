#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportPlayerClientResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportPlayerClientResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerClientResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_ReportPlayerClientResult__Fields_DEFINED
struct ReportPlayerClientResult__Fields {
    struct PlayFabResultCommon__Fields _;
    int32_t SubmissionsRemaining;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportPlayerClientResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReportPlayerClientResult__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReportPlayerClientResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportPlayerClientResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReportPlayerClientResult__Fields_FWDDECL)
#include <Modloader/app/structs/ReportPlayerClientResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportPlayerClientResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
