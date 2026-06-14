#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMIDIEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMIDIEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_DEFINED)
#include <Modloader/app/structs/AkMIDIEvent__Fields.h>
#if defined(IL2CPP_STRUCT_AkMIDIEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMIDIEvent_DEFINED
struct AkMIDIEvent__Class;
struct AkMIDIEvent {
    struct AkMIDIEvent__Class* klass;
    MonitorData* monitor;
    struct AkMIDIEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_FWDDECL)
#define IL2CPP_STRUCT_AkMIDIEvent_FWDDECL
#include <Modloader/app/structs/AkMIDIEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMIDIEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_DEFINED) && !defined(IL2CPP_STRUCT_AkMIDIEvent_FWDDECL)
#include <Modloader/app/structs/AkMIDIEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMIDIEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
