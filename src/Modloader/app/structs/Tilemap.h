#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tilemap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tilemap_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tilemap_DEFINED)
#include <Modloader/app/structs/Tilemap__Fields.h>
#if defined(IL2CPP_STRUCT_Tilemap__Fields_DEFINED)
#define IL2CPP_STRUCT_Tilemap_DEFINED
struct Tilemap__Class;
struct Tilemap {
    struct Tilemap__Class* klass;
    MonitorData* monitor;
    struct Tilemap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tilemap_FWDDECL)
#define IL2CPP_STRUCT_Tilemap_FWDDECL
#include <Modloader/app/structs/Tilemap__Class.h>
#endif
#undef IL2CPP_STRUCT_Tilemap_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tilemap_DEFINED) && !defined(IL2CPP_STRUCT_Tilemap_FWDDECL)
#include <Modloader/app/structs/Tilemap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tilemap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
