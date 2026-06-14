#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateGroupRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateGroupRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_UpdateGroupRequest__Fields_DEFINED
struct String;
struct EntityKey_5;
struct UpdateGroupRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* AdminRoleId;
    struct Nullable_1_Int32_ ExpectedProfileVersion;
    struct EntityKey_5* Group;
    struct String* GroupName;
    struct String* MemberRoleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateGroupRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateGroupRequest__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UpdateGroupRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateGroupRequest__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateGroupRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateGroupRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
