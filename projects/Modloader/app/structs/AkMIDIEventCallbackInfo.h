#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMIDIEventCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMIDIEventCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEventCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkMIDIEventCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkMIDIEventCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMIDIEventCallbackInfo_DEFINED
struct AkMIDIEventCallbackInfo__Class;
struct AkMIDIEventCallbackInfo {
    struct AkMIDIEventCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkMIDIEventCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMIDIEventCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkMIDIEventCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkMIDIEventCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMIDIEventCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEventCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkMIDIEventCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkMIDIEventCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMIDIEventCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
