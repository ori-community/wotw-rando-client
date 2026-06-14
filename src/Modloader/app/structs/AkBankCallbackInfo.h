#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkBankCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkBankCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkBankCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkBankCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkBankCallbackInfo_DEFINED
struct AkBankCallbackInfo__Class;
struct AkBankCallbackInfo {
    struct AkBankCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkBankCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkBankCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkBankCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkBankCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkBankCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBankCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkBankCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkBankCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkBankCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
