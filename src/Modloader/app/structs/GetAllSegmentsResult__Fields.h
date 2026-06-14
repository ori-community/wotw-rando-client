#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAllSegmentsResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAllSegmentsResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAllSegmentsResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_GetAllSegmentsResult__Fields_DEFINED
struct List_1_PlayFab_ServerModels_GetSegmentResult_;
struct GetAllSegmentsResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ServerModels_GetSegmentResult_* Segments;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAllSegmentsResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetAllSegmentsResult__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_GetSegmentResult_.h>
#endif
#undef IL2CPP_STRUCT_GetAllSegmentsResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAllSegmentsResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetAllSegmentsResult__Fields_FWDDECL)
#include <Modloader/app/structs/GetAllSegmentsResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAllSegmentsResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
