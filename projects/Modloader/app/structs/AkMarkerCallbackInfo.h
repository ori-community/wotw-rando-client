#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMarkerCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMarkerCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMarkerCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkMarkerCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkMarkerCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMarkerCallbackInfo_DEFINED
struct AkMarkerCallbackInfo__Class;
struct AkMarkerCallbackInfo {
    struct AkMarkerCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkMarkerCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMarkerCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkMarkerCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkMarkerCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMarkerCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMarkerCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkMarkerCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkMarkerCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMarkerCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
