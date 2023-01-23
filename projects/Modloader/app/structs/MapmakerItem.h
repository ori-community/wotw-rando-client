#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapmakerItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapmakerItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerItem_DEFINED)
#include <Modloader/app/structs/MapmakerItem__Fields.h>
#if defined(IL2CPP_STRUCT_MapmakerItem__Fields_DEFINED)
#define IL2CPP_STRUCT_MapmakerItem_DEFINED
struct MapmakerItem__Class;
struct MapmakerItem {
    struct MapmakerItem__Class* klass;
    MonitorData* monitor;
    struct MapmakerItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapmakerItem_FWDDECL)
#define IL2CPP_STRUCT_MapmakerItem_FWDDECL
#include <Modloader/app/structs/MapmakerItem__Class.h>
#endif
#undef IL2CPP_STRUCT_MapmakerItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerItem_DEFINED) && !defined(IL2CPP_STRUCT_MapmakerItem_FWDDECL)
#include <Modloader/app/structs/MapmakerItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapmakerItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
