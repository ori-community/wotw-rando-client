#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioPlayableOutput__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioPlayableOutput__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioPlayableOutput__Boxed_DEFINED)
#include <Modloader/app/structs/AudioPlayableOutput.h>
#if defined(IL2CPP_STRUCT_AudioPlayableOutput_DEFINED)
#define IL2CPP_STRUCT_AudioPlayableOutput__Boxed_DEFINED
struct AudioPlayableOutput__Class;
struct AudioPlayableOutput__Boxed {
    struct AudioPlayableOutput__Class* klass;
    MonitorData* monitor;
    struct AudioPlayableOutput fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioPlayableOutput__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AudioPlayableOutput__Boxed_FWDDECL
#include <Modloader/app/structs/AudioPlayableOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioPlayableOutput__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioPlayableOutput__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AudioPlayableOutput__Boxed_FWDDECL)
#include <Modloader/app/structs/AudioPlayableOutput__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioPlayableOutput__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
