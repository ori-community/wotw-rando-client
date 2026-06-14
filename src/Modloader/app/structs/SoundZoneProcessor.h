#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundZoneProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundZoneProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_DEFINED)
#include <Modloader/app/structs/SoundZoneProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_SoundZoneProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundZoneProcessor_DEFINED
struct SoundZoneProcessor__Class;
struct SoundZoneProcessor {
    struct SoundZoneProcessor__Class* klass;
    MonitorData* monitor;
    struct SoundZoneProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_FWDDECL)
#define IL2CPP_STRUCT_SoundZoneProcessor_FWDDECL
#include <Modloader/app/structs/SoundZoneProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundZoneProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_DEFINED) && !defined(IL2CPP_STRUCT_SoundZoneProcessor_FWDDECL)
#include <Modloader/app/structs/SoundZoneProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundZoneProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
