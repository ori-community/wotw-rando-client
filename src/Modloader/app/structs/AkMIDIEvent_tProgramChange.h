#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_DEFINED)
#include <Modloader/app/structs/AkMIDIEvent_tProgramChange__Fields.h>
#if defined(IL2CPP_STRUCT_AkMIDIEvent_tProgramChange__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_DEFINED
struct AkMIDIEvent_tProgramChange__Class;
struct AkMIDIEvent_tProgramChange {
    struct AkMIDIEvent_tProgramChange__Class* klass;
    MonitorData* monitor;
    struct AkMIDIEvent_tProgramChange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_FWDDECL)
#define IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_FWDDECL
#include <Modloader/app/structs/AkMIDIEvent_tProgramChange__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_DEFINED) && !defined(IL2CPP_STRUCT_AkMIDIEvent_tProgramChange_FWDDECL)
#include <Modloader/app/structs/AkMIDIEvent_tProgramChange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMIDIEvent_tProgramChange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
