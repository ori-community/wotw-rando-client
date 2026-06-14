#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkBankManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkBankManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager_DEFINED)
#define IL2CPP_STRUCT_AkBankManager_DEFINED
struct AkBankManager__Class;
struct AkBankManager {
    struct AkBankManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkBankManager_FWDDECL)
#define IL2CPP_STRUCT_AkBankManager_FWDDECL
#include <Modloader/app/structs/AkBankManager__Class.h>
#endif
#undef IL2CPP_STRUCT_AkBankManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankManager_DEFINED) && !defined(IL2CPP_STRUCT_AkBankManager_FWDDECL)
#include <Modloader/app/structs/AkBankManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkBankManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
