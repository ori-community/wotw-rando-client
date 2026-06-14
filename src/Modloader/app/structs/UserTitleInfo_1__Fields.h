#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserTitleInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserTitleInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserTitleInfo_1__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ServerModels_UserOrigination_.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ServerModels_UserOrigination__DEFINED)
#define IL2CPP_STRUCT_UserTitleInfo_1__Fields_DEFINED
struct String;
struct EntityKey_8;
struct __declspec(align(8)) UserTitleInfo_1__Fields {
    struct String* AvatarUrl;
    struct DateTime Created;
    struct String* DisplayName;
    struct Nullable_1_DateTime_ FirstLogin;
    struct Nullable_1_Boolean_ isBanned;
    struct Nullable_1_DateTime_ LastLogin;
    struct Nullable_1_PlayFab_ServerModels_UserOrigination_ Origination;
    struct EntityKey_8* TitlePlayerAccount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserTitleInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_UserTitleInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_8.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UserTitleInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserTitleInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UserTitleInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/UserTitleInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserTitleInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
