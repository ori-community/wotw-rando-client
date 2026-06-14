#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TileData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TileData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TileData__Boxed_DEFINED)
#include <Modloader/app/structs/TileData.h>
#if defined(IL2CPP_STRUCT_TileData_DEFINED)
#define IL2CPP_STRUCT_TileData__Boxed_DEFINED
struct TileData__Class;
struct TileData__Boxed {
    struct TileData__Class* klass;
    MonitorData* monitor;
    struct TileData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TileData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TileData__Boxed_FWDDECL
#include <Modloader/app/structs/TileData__Class.h>
#endif
#undef IL2CPP_STRUCT_TileData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TileData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TileData__Boxed_FWDDECL)
#include <Modloader/app/structs/TileData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TileData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
