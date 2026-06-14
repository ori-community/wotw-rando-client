#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtificialSoundHost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtificialSoundHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost_DEFINED)
#include <Modloader/app/structs/ArtificialSoundHost__Fields.h>
#if defined(IL2CPP_STRUCT_ArtificialSoundHost__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtificialSoundHost_DEFINED
struct ArtificialSoundHost__Class;
struct ArtificialSoundHost {
    struct ArtificialSoundHost__Class* klass;
    MonitorData* monitor;
    struct ArtificialSoundHost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost_FWDDECL)
#define IL2CPP_STRUCT_ArtificialSoundHost_FWDDECL
#include <Modloader/app/structs/ArtificialSoundHost__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtificialSoundHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost_DEFINED) && !defined(IL2CPP_STRUCT_ArtificialSoundHost_FWDDECL)
#include <Modloader/app/structs/ArtificialSoundHost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtificialSoundHost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
