#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTitleNewsResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTitleNewsResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleNewsResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTitleNewsResult__Fields_DEFINED
struct List_1_PlayFab_ClientModels_TitleNewsItem_;
struct GetTitleNewsResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ClientModels_TitleNewsItem_* News;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTitleNewsResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetTitleNewsResult__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_TitleNewsItem_.h>
#endif
#undef IL2CPP_STRUCT_GetTitleNewsResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleNewsResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetTitleNewsResult__Fields_FWDDECL)
#include <Modloader/app/structs/GetTitleNewsResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTitleNewsResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
