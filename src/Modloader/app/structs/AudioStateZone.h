#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioStateZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioStateZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioStateZone_DEFINED)
#include <Modloader/app/structs/AudioStateZone__Fields.h>
#if defined(IL2CPP_STRUCT_AudioStateZone__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioStateZone_DEFINED
struct AudioStateZone__Class;
struct AudioStateZone {
    struct AudioStateZone__Class* klass;
    MonitorData* monitor;
    struct AudioStateZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioStateZone_FWDDECL)
#define IL2CPP_STRUCT_AudioStateZone_FWDDECL
#include <Modloader/app/structs/AudioStateZone__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioStateZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioStateZone_DEFINED) && !defined(IL2CPP_STRUCT_AudioStateZone_FWDDECL)
#include <Modloader/app/structs/AudioStateZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioStateZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
