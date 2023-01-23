#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_DEFINED)
#include <Modloader/app/structs/AkBankManager_BankHandle__Fields.h>
#if defined(IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_DEFINED
struct AkCallbackManager_BankCallback;
struct AkBankManager_AsyncBankHandle__Fields {
    struct AkBankManager_BankHandle__Fields _;
    struct AkCallbackManager_BankCallback* bankCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_FWDDECL
#include <Modloader/app/structs/AkCallbackManager_BankCallback.h>
#endif
#undef IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkBankManager_AsyncBankHandle__Fields_FWDDECL)
#include <Modloader/app/structs/AkBankManager_AsyncBankHandle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkBankManager_AsyncBankHandle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
