#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerSoundZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerSoundZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSoundZone_DEFINED)
#include <Modloader/app/structs/ListenerSoundZone__Fields.h>
#if defined(IL2CPP_STRUCT_ListenerSoundZone__Fields_DEFINED)
#define IL2CPP_STRUCT_ListenerSoundZone_DEFINED
struct ListenerSoundZone__Class;
struct ListenerSoundZone {
    struct ListenerSoundZone__Class* klass;
    MonitorData* monitor;
    struct ListenerSoundZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListenerSoundZone_FWDDECL)
#define IL2CPP_STRUCT_ListenerSoundZone_FWDDECL
#include <Modloader/app/structs/ListenerSoundZone__Class.h>
#endif
#undef IL2CPP_STRUCT_ListenerSoundZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSoundZone_DEFINED) && !defined(IL2CPP_STRUCT_ListenerSoundZone_FWDDECL)
#include <Modloader/app/structs/ListenerSoundZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerSoundZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
