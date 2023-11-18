#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_DEFINED
struct AkCallbackManager_BankCallback;
struct Object;
struct __declspec(align(8)) AkCallbackManager_BankCallbackPackage__Fields {
    struct AkCallbackManager_BankCallback* m_Callback;
    struct Object* m_Cookie;
};
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_FWDDECL
#include <Modloader/app/structs/AkCallbackManager_BankCallback.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackManager_BankCallbackPackage__Fields_FWDDECL)
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
