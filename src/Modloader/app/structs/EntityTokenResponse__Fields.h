#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityTokenResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityTokenResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTokenResponse__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_EntityTokenResponse__Fields_DEFINED
struct EntityKey_1;
struct String;
struct EntityTokenResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityKey_1* Entity;
    struct String* EntityToken;
    struct Nullable_1_DateTime_ TokenExpiration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityTokenResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityTokenResponse__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EntityTokenResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTokenResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityTokenResponse__Fields_FWDDECL)
#include <Modloader/app/structs/EntityTokenResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityTokenResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
