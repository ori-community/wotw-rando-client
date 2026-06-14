#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbientSoundZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbientSoundZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientSoundZone_DEFINED)
#include <Modloader/app/structs/AmbientSoundZone__Fields.h>
#if defined(IL2CPP_STRUCT_AmbientSoundZone__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbientSoundZone_DEFINED
struct AmbientSoundZone__Class;
struct AmbientSoundZone {
    struct AmbientSoundZone__Class* klass;
    MonitorData* monitor;
    struct AmbientSoundZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbientSoundZone_FWDDECL)
#define IL2CPP_STRUCT_AmbientSoundZone_FWDDECL
#include <Modloader/app/structs/AmbientSoundZone__Class.h>
#endif
#undef IL2CPP_STRUCT_AmbientSoundZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientSoundZone_DEFINED) && !defined(IL2CPP_STRUCT_AmbientSoundZone_FWDDECL)
#include <Modloader/app/structs/AmbientSoundZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbientSoundZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
