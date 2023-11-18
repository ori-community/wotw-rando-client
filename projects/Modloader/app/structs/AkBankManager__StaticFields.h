#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkBankManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkBankManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AkBankManager__StaticFields_DEFINED
struct Dictionary_2_System_String_AkBankManager_BankHandle_;
struct List_1_AkBankManager_BankHandle_;
struct Mutex;
struct AkBankManager__StaticFields {
    struct Dictionary_2_System_String_AkBankManager_BankHandle_* m_BankHandles;
    struct List_1_AkBankManager_BankHandle_* BanksToUnload;
    struct Mutex* m_Mutex;
};
#endif
#if !defined(IL2CPP_STRUCT_AkBankManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AkBankManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_AkBankManager_BankHandle_.h>
#include <Modloader/app/structs/List_1_AkBankManager_BankHandle_.h>
#include <Modloader/app/structs/Mutex.h>
#endif
#undef IL2CPP_STRUCT_AkBankManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AkBankManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/AkBankManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkBankManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
