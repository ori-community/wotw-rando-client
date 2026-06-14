#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapmakerScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapmakerScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerScreen_DEFINED)
#include <Modloader/app/structs/MapmakerScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MapmakerScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_MapmakerScreen_DEFINED
struct MapmakerScreen__Class;
struct MapmakerScreen {
    struct MapmakerScreen__Class* klass;
    MonitorData* monitor;
    struct MapmakerScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapmakerScreen_FWDDECL)
#define IL2CPP_STRUCT_MapmakerScreen_FWDDECL
#include <Modloader/app/structs/MapmakerScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_MapmakerScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerScreen_DEFINED) && !defined(IL2CPP_STRUCT_MapmakerScreen_FWDDECL)
#include <Modloader/app/structs/MapmakerScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapmakerScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
