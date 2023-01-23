#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapUI_DEFINED)
#include <Modloader/app/structs/WorldMapUI__Fields.h>
#if defined(IL2CPP_STRUCT_WorldMapUI__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldMapUI_DEFINED
struct WorldMapUI__Class;
struct WorldMapUI {
    struct WorldMapUI__Class* klass;
    MonitorData* monitor;
    struct WorldMapUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldMapUI_FWDDECL)
#define IL2CPP_STRUCT_WorldMapUI_FWDDECL
#include <Modloader/app/structs/WorldMapUI__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldMapUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapUI_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapUI_FWDDECL)
#include <Modloader/app/structs/WorldMapUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
