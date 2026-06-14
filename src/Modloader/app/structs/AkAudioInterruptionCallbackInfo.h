#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_DEFINED
struct AkAudioInterruptionCallbackInfo__Class;
struct AkAudioInterruptionCallbackInfo {
    struct AkAudioInterruptionCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkAudioInterruptionCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkAudioInterruptionCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
