#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkBankManager_BankHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkBankManager_BankHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager_BankHandle_DEFINED)
#include <Modloader/app/structs/AkBankManager_BankHandle__Fields.h>
#if defined(IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_AkBankManager_BankHandle_DEFINED
struct AkBankManager_BankHandle__Class;
struct AkBankManager_BankHandle {
    struct AkBankManager_BankHandle__Class* klass;
    MonitorData* monitor;
    struct AkBankManager_BankHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkBankManager_BankHandle_FWDDECL)
#define IL2CPP_STRUCT_AkBankManager_BankHandle_FWDDECL
#include <Modloader/app/structs/AkBankManager_BankHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_AkBankManager_BankHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager_BankHandle_DEFINED) && !defined(IL2CPP_STRUCT_AkBankManager_BankHandle_FWDDECL)
#include <Modloader/app/structs/AkBankManager_BankHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkBankManager_BankHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
