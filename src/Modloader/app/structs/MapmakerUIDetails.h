#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapmakerUIDetails_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapmakerUIDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerUIDetails_DEFINED)
#include <Modloader/app/structs/MapmakerUIDetails__Fields.h>
#if defined(IL2CPP_STRUCT_MapmakerUIDetails__Fields_DEFINED)
#define IL2CPP_STRUCT_MapmakerUIDetails_DEFINED
struct MapmakerUIDetails__Class;
struct MapmakerUIDetails {
    struct MapmakerUIDetails__Class* klass;
    MonitorData* monitor;
    struct MapmakerUIDetails__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapmakerUIDetails_FWDDECL)
#define IL2CPP_STRUCT_MapmakerUIDetails_FWDDECL
#include <Modloader/app/structs/MapmakerUIDetails__Class.h>
#endif
#undef IL2CPP_STRUCT_MapmakerUIDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerUIDetails_DEFINED) && !defined(IL2CPP_STRUCT_MapmakerUIDetails_FWDDECL)
#include <Modloader/app/structs/MapmakerUIDetails.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapmakerUIDetails.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
