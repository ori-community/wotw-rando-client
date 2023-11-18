#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMIDIEvent_tGen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMIDIEvent_tGen_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tGen_DEFINED)
#include <Modloader/app/structs/AkMIDIEvent_tGen__Fields.h>
#if defined(IL2CPP_STRUCT_AkMIDIEvent_tGen__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMIDIEvent_tGen_DEFINED
struct AkMIDIEvent_tGen__Class;
struct AkMIDIEvent_tGen {
    struct AkMIDIEvent_tGen__Class* klass;
    MonitorData* monitor;
    struct AkMIDIEvent_tGen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tGen_FWDDECL)
#define IL2CPP_STRUCT_AkMIDIEvent_tGen_FWDDECL
#include <Modloader/app/structs/AkMIDIEvent_tGen__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMIDIEvent_tGen_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEvent_tGen_DEFINED) && !defined(IL2CPP_STRUCT_AkMIDIEvent_tGen_FWDDECL)
#include <Modloader/app/structs/AkMIDIEvent_tGen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMIDIEvent_tGen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
