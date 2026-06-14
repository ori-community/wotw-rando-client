#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetGroupResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetGroupResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGroupResponse__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_GetGroupResponse__Fields_DEFINED
struct String;
struct EntityKey_5;
struct Dictionary_2_System_String_System_String_;
struct GetGroupResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String* AdminRoleId;
    struct DateTime Created;
    struct EntityKey_5* Group;
    struct String* GroupName;
    struct String* MemberRoleId;
    int32_t ProfileVersion;
    struct Dictionary_2_System_String_System_String_* Roles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetGroupResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetGroupResponse__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetGroupResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGroupResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetGroupResponse__Fields_FWDDECL)
#include <Modloader/app/structs/GetGroupResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetGroupResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
