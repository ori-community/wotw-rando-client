#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMIDIEventTypes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMIDIEventTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEventTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_AkMIDIEventTypes__Enum_DEFINED
enum class AkMIDIEventTypes__Enum : int32_t {
    NOTE_OFF = 0x00000080,
    NOTE_ON = 0x00000090,
    NOTE_AFTERTOUCH = 0x000000a0,
    CONTROLLER = 0x000000b0,
    PROGRAM_CHANGE = 0x000000c0,
    CHANNEL_AFTERTOUCH = 0x000000d0,
    PITCH_BEND = 0x000000e0,
    SYSEX = 0x000000f0,
    ESCAPE = 0x000000f7,
    META = 0x000000ff,
};
#endif
#if !defined(IL2CPP_STRUCT_AkMIDIEventTypes__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkMIDIEventTypes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkMIDIEventTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIEventTypes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkMIDIEventTypes__Enum_FWDDECL)
#include <Modloader/app/structs/AkMIDIEventTypes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMIDIEventTypes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
