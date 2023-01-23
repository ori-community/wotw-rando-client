#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicZone_DEFINED)
#include <Modloader/app/structs/MusicZone__Fields.h>
#if defined(IL2CPP_STRUCT_MusicZone__Fields_DEFINED)
#define IL2CPP_STRUCT_MusicZone_DEFINED
struct MusicZone__Class;
struct MusicZone {
    struct MusicZone__Class* klass;
    MonitorData* monitor;
    struct MusicZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicZone_FWDDECL)
#define IL2CPP_STRUCT_MusicZone_FWDDECL
#include <Modloader/app/structs/MusicZone__Class.h>
#endif
#undef IL2CPP_STRUCT_MusicZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicZone_DEFINED) && !defined(IL2CPP_STRUCT_MusicZone_FWDDECL)
#include <Modloader/app/structs/MusicZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
