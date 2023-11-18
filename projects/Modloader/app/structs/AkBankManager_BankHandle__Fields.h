#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_DEFINED
struct String;
struct __declspec(align(8)) AkBankManager_BankHandle__Fields {
    struct String* bankName;
    uint32_t m_BankID;
    int32_t _RefCount_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkBankManager_BankHandle__Fields_FWDDECL)
#include <Modloader/app/structs/AkBankManager_BankHandle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkBankManager_BankHandle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
