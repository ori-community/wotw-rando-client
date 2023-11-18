#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_DEFINED)
#include <Modloader/app/structs/AkMIDIEvent_tNoteOnOff__Fields.h>
#if defined(IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_DEFINED
struct AkMIDIEvent_tNoteOnOff__Class;
struct AkMIDIEvent_tNoteOnOff {
    struct AkMIDIEvent_tNoteOnOff__Class* klass;
    MonitorData* monitor;
    struct AkMIDIEvent_tNoteOnOff__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_FWDDECL)
#define IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_FWDDECL
#include <Modloader/app/structs/AkMIDIEvent_tNoteOnOff__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_DEFINED) && !defined(IL2CPP_STRUCT_AkMIDIEvent_tNoteOnOff_FWDDECL)
#include <Modloader/app/structs/AkMIDIEvent_tNoteOnOff.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMIDIEvent_tNoteOnOff.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
