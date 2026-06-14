#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Coord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Coord_INITIALIZING
#if !defined(IL2CPP_STRUCT_Coord_DEFINED)
#define IL2CPP_STRUCT_Coord_DEFINED
struct Coord {
    int16_t X;
    int16_t Y;
};
#endif
#if !defined(IL2CPP_STRUCT_Coord_FWDDECL)
#define IL2CPP_STRUCT_Coord_FWDDECL
#endif
#undef IL2CPP_STRUCT_Coord_INITIALIZING
#if !defined(IL2CPP_STRUCT_Coord_DEFINED) && !defined(IL2CPP_STRUCT_Coord_FWDDECL)
#include <Modloader/app/structs/Coord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Coord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
