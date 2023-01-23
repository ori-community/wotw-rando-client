#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackManager_BankCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackManager_BankCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BankCallback_DEFINED)
#include <Modloader/app/structs/AkCallbackManager_BankCallback__Fields.h>
#if defined(IL2CPP_STRUCT_AkCallbackManager_BankCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackManager_BankCallback_DEFINED
struct AkCallbackManager_BankCallback__Class;
struct AkCallbackManager_BankCallback {
    struct AkCallbackManager_BankCallback__Class* klass;
    MonitorData* monitor;
    struct AkCallbackManager_BankCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BankCallback_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackManager_BankCallback_FWDDECL
#include <Modloader/app/structs/AkCallbackManager_BankCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackManager_BankCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BankCallback_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackManager_BankCallback_FWDDECL)
#include <Modloader/app/structs/AkCallbackManager_BankCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackManager_BankCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
