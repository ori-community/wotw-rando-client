#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrdkSignInProvider__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrdkSignInProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__VTable_DEFINED)
#define IL2CPP_STRUCT_GrdkSignInProvider__VTable_DEFINED
struct GrdkSignInProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsSignedIn;
    VirtualInvokeData get_IsSigningIn;
    VirtualInvokeData get_User;
    VirtualInvokeData get_HasSignInError;
    VirtualInvokeData get_ShowSignInUi;
    VirtualInvokeData get_ShowAchievementUi;
    VirtualInvokeData get_LinkToken;
    VirtualInvokeData get_SignInOnPressAnyButton;
    VirtualInvokeData SignInSilently;
    VirtualInvokeData SignIn;
    VirtualInvokeData Update;
};
#endif
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__VTable_FWDDECL)
#define IL2CPP_STRUCT_GrdkSignInProvider__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_GrdkSignInProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__VTable_DEFINED) && !defined(IL2CPP_STRUCT_GrdkSignInProvider__VTable_FWDDECL)
#include <Modloader/app/structs/GrdkSignInProvider__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrdkSignInProvider__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
