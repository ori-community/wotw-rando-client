#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLinkedAccount__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLinkedAccount__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccount__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ServerModels_LoginIdentityProvider__DEFINED)
#define IL2CPP_STRUCT_PlayerLinkedAccount__Fields_DEFINED
struct String;
struct __declspec(align(8)) PlayerLinkedAccount__Fields {
    struct String* Email;
    struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_ Platform;
    struct String* PlatformUserId;
    struct String* Username;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccount__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerLinkedAccount__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerLinkedAccount__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccount__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLinkedAccount__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerLinkedAccount__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLinkedAccount__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
