#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapmakerUIItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapmakerUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerUIItem_DEFINED)
#include <Modloader/app/structs/MapmakerUIItem__Fields.h>
#if defined(IL2CPP_STRUCT_MapmakerUIItem__Fields_DEFINED)
#define IL2CPP_STRUCT_MapmakerUIItem_DEFINED
struct MapmakerUIItem__Class;
struct MapmakerUIItem {
    struct MapmakerUIItem__Class* klass;
    MonitorData* monitor;
    struct MapmakerUIItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapmakerUIItem_FWDDECL)
#define IL2CPP_STRUCT_MapmakerUIItem_FWDDECL
#include <Modloader/app/structs/MapmakerUIItem__Class.h>
#endif
#undef IL2CPP_STRUCT_MapmakerUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerUIItem_DEFINED) && !defined(IL2CPP_STRUCT_MapmakerUIItem_FWDDECL)
#include <Modloader/app/structs/MapmakerUIItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapmakerUIItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
