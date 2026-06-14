#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMIDIPost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMIDIPost_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIPost_DEFINED)
#include <Modloader/app/structs/AkMIDIPost__Fields.h>
#if defined(IL2CPP_STRUCT_AkMIDIPost__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMIDIPost_DEFINED
struct AkMIDIPost__Class;
struct AkMIDIPost {
    struct AkMIDIPost__Class* klass;
    MonitorData* monitor;
    struct AkMIDIPost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMIDIPost_FWDDECL)
#define IL2CPP_STRUCT_AkMIDIPost_FWDDECL
#include <Modloader/app/structs/AkMIDIPost__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMIDIPost_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIPost_DEFINED) && !defined(IL2CPP_STRUCT_AkMIDIPost_FWDDECL)
#include <Modloader/app/structs/AkMIDIPost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMIDIPost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
