#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbienceZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbienceZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceZone_DEFINED)
#include <Modloader/app/structs/AmbienceZone__Fields.h>
#if defined(IL2CPP_STRUCT_AmbienceZone__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbienceZone_DEFINED
struct AmbienceZone__Class;
struct AmbienceZone {
    struct AmbienceZone__Class* klass;
    MonitorData* monitor;
    struct AmbienceZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbienceZone_FWDDECL)
#define IL2CPP_STRUCT_AmbienceZone_FWDDECL
#include <Modloader/app/structs/AmbienceZone__Class.h>
#endif
#undef IL2CPP_STRUCT_AmbienceZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceZone_DEFINED) && !defined(IL2CPP_STRUCT_AmbienceZone_FWDDECL)
#include <Modloader/app/structs/AmbienceZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbienceZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
