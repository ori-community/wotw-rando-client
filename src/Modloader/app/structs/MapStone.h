#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapStone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapStone_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapStone_DEFINED)
#include <Modloader/app/structs/MapStone__Fields.h>
#if defined(IL2CPP_STRUCT_MapStone__Fields_DEFINED)
#define IL2CPP_STRUCT_MapStone_DEFINED
struct MapStone__Class;
struct MapStone {
    struct MapStone__Class* klass;
    MonitorData* monitor;
    struct MapStone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapStone_FWDDECL)
#define IL2CPP_STRUCT_MapStone_FWDDECL
#include <Modloader/app/structs/MapStone__Class.h>
#endif
#undef IL2CPP_STRUCT_MapStone_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapStone_DEFINED) && !defined(IL2CPP_STRUCT_MapStone_FWDDECL)
#include <Modloader/app/structs/MapStone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapStone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
