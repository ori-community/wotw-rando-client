#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioEmitterZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioEmitterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioEmitterZone_DEFINED)
#include <Modloader/app/structs/AudioEmitterZone__Fields.h>
#if defined(IL2CPP_STRUCT_AudioEmitterZone__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioEmitterZone_DEFINED
struct AudioEmitterZone__Class;
struct AudioEmitterZone {
    struct AudioEmitterZone__Class* klass;
    MonitorData* monitor;
    struct AudioEmitterZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioEmitterZone_FWDDECL)
#define IL2CPP_STRUCT_AudioEmitterZone_FWDDECL
#include <Modloader/app/structs/AudioEmitterZone__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioEmitterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioEmitterZone_DEFINED) && !defined(IL2CPP_STRUCT_AudioEmitterZone_FWDDECL)
#include <Modloader/app/structs/AudioEmitterZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioEmitterZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
