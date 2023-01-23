#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioListenerZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioListenerZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListenerZone_DEFINED)
#include <Modloader/app/structs/AudioListenerZone__Fields.h>
#if defined(IL2CPP_STRUCT_AudioListenerZone__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioListenerZone_DEFINED
struct AudioListenerZone__Class;
struct AudioListenerZone {
    struct AudioListenerZone__Class* klass;
    MonitorData* monitor;
    struct AudioListenerZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioListenerZone_FWDDECL)
#define IL2CPP_STRUCT_AudioListenerZone_FWDDECL
#include <Modloader/app/structs/AudioListenerZone__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioListenerZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListenerZone_DEFINED) && !defined(IL2CPP_STRUCT_AudioListenerZone_FWDDECL)
#include <Modloader/app/structs/AudioListenerZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioListenerZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
