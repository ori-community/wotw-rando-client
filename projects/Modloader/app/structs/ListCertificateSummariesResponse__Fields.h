#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_DEFINED
struct List_1_PlayFab_MultiplayerModels_CertificateSummary_;
struct String;
struct ListCertificateSummariesResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_MultiplayerModels_CertificateSummary_* CertificateSummaries;
    int32_t PageSize;
    struct String* SkipToken;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_CertificateSummary_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListCertificateSummariesResponse__Fields_FWDDECL)
#include <Modloader/app/structs/ListCertificateSummariesResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListCertificateSummariesResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
