#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackInfo_DEFINED
struct AkCallbackInfo__Class;
struct AkCallbackInfo {
    struct AkCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
