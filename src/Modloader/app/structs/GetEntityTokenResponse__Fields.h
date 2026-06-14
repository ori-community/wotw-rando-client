#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEntityTokenResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEntityTokenResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityTokenResponse__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_GetEntityTokenResponse__Fields_DEFINED
struct EntityKey;
struct String;
struct GetEntityTokenResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityKey* Entity;
    struct String* EntityToken;
    struct Nullable_1_DateTime_ TokenExpiration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEntityTokenResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetEntityTokenResponse__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetEntityTokenResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityTokenResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetEntityTokenResponse__Fields_FWDDECL)
#include <Modloader/app/structs/GetEntityTokenResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEntityTokenResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
