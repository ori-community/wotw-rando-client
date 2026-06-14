#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_DEFINED)
#include <Modloader/app/structs/AzureRegion__Enum.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_AzureRegion__Enum_DEFINED)
#define IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_DEFINED
struct String;
struct DeleteRemoteUserRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* BuildId;
    AzureRegion__Enum Region_1;

    struct String* Username;
    struct String* VmId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_FWDDECL)
#include <Modloader/app/structs/DeleteRemoteUserRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteRemoteUserRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
