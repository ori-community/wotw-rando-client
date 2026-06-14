#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMIDIPostArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMIDIPostArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIPostArray_DEFINED)
#include <Modloader/app/structs/AkMIDIPostArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkMIDIPostArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMIDIPostArray_DEFINED
struct AkMIDIPostArray__Class;
struct AkMIDIPostArray {
    struct AkMIDIPostArray__Class* klass;
    MonitorData* monitor;
    struct AkMIDIPostArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMIDIPostArray_FWDDECL)
#define IL2CPP_STRUCT_AkMIDIPostArray_FWDDECL
#include <Modloader/app/structs/AkMIDIPostArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMIDIPostArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMIDIPostArray_DEFINED) && !defined(IL2CPP_STRUCT_AkMIDIPostArray_FWDDECL)
#include <Modloader/app/structs/AkMIDIPostArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMIDIPostArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
