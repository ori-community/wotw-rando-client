#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkAudioSourceChangeCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_DEFINED
struct AkAudioSourceChangeCallbackInfo__Class;
struct AkAudioSourceChangeCallbackInfo {
    struct AkAudioSourceChangeCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkAudioSourceChangeCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkAudioSourceChangeCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkAudioSourceChangeCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkAudioSourceChangeCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAudioSourceChangeCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
