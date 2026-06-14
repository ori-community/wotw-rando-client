#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkEventCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkEventCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkEventCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkEventCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkEventCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkEventCallbackInfo_DEFINED
struct AkEventCallbackInfo__Class;
struct AkEventCallbackInfo {
    struct AkEventCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkEventCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkEventCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkEventCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkEventCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkEventCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkEventCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkEventCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkEventCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkEventCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
