#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_DEFINED
struct String;
struct GetContentDownloadUrlRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* HttpMethod;
    struct String* Key;
    struct Nullable_1_Boolean_ ThruCDN;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_FWDDECL)
#include <Modloader/app/structs/GetContentDownloadUrlRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetContentDownloadUrlRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
