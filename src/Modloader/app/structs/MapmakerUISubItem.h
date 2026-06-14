#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapmakerUISubItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapmakerUISubItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerUISubItem_DEFINED)
#include <Modloader/app/structs/MapmakerUISubItem__Fields.h>
#if defined(IL2CPP_STRUCT_MapmakerUISubItem__Fields_DEFINED)
#define IL2CPP_STRUCT_MapmakerUISubItem_DEFINED
struct MapmakerUISubItem__Class;
struct MapmakerUISubItem {
    struct MapmakerUISubItem__Class* klass;
    MonitorData* monitor;
    struct MapmakerUISubItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapmakerUISubItem_FWDDECL)
#define IL2CPP_STRUCT_MapmakerUISubItem_FWDDECL
#include <Modloader/app/structs/MapmakerUISubItem__Class.h>
#endif
#undef IL2CPP_STRUCT_MapmakerUISubItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerUISubItem_DEFINED) && !defined(IL2CPP_STRUCT_MapmakerUISubItem_FWDDECL)
#include <Modloader/app/structs/MapmakerUISubItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapmakerUISubItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
