#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAudioFormat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAudioFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioFormat_DEFINED)
#include <Modloader/app/structs/AkAudioFormat__Fields.h>
#if defined(IL2CPP_STRUCT_AkAudioFormat__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAudioFormat_DEFINED
struct AkAudioFormat__Class;
struct AkAudioFormat {
    struct AkAudioFormat__Class* klass;
    MonitorData* monitor;
    struct AkAudioFormat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkAudioFormat_FWDDECL)
#define IL2CPP_STRUCT_AkAudioFormat_FWDDECL
#include <Modloader/app/structs/AkAudioFormat__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAudioFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioFormat_DEFINED) && !defined(IL2CPP_STRUCT_AkAudioFormat_FWDDECL)
#include <Modloader/app/structs/AkAudioFormat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAudioFormat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
