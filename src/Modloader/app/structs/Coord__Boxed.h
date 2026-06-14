#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Coord__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Coord__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Coord__Boxed_DEFINED)
#include <Modloader/app/structs/Coord.h>
#if defined(IL2CPP_STRUCT_Coord_DEFINED)
#define IL2CPP_STRUCT_Coord__Boxed_DEFINED
struct Coord__Class;
struct Coord__Boxed {
    struct Coord__Class* klass;
    MonitorData* monitor;
    struct Coord fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Coord__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Coord__Boxed_FWDDECL
#include <Modloader/app/structs/Coord__Class.h>
#endif
#undef IL2CPP_STRUCT_Coord__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Coord__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Coord__Boxed_FWDDECL)
#include <Modloader/app/structs/Coord__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Coord__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
