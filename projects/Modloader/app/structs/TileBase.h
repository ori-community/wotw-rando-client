#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TileBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TileBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_TileBase_DEFINED)
#include <Modloader/app/structs/TileBase__Fields.h>
#if defined(IL2CPP_STRUCT_TileBase__Fields_DEFINED)
#define IL2CPP_STRUCT_TileBase_DEFINED
struct TileBase__Class;
struct TileBase {
    struct TileBase__Class* klass;
    MonitorData* monitor;
    struct TileBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TileBase_FWDDECL)
#define IL2CPP_STRUCT_TileBase_FWDDECL
#include <Modloader/app/structs/TileBase__Class.h>
#endif
#undef IL2CPP_STRUCT_TileBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_TileBase_DEFINED) && !defined(IL2CPP_STRUCT_TileBase_FWDDECL)
#include <Modloader/app/structs/TileBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TileBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
