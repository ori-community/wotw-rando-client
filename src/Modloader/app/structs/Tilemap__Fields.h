#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tilemap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tilemap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tilemap__Fields_DEFINED)
#include <Modloader/app/structs/GridLayout__Fields.h>
#if defined(IL2CPP_STRUCT_GridLayout__Fields_DEFINED)
#define IL2CPP_STRUCT_Tilemap__Fields_DEFINED
struct Tilemap__Fields {
    struct GridLayout__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tilemap__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tilemap__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Tilemap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tilemap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tilemap__Fields_FWDDECL)
#include <Modloader/app/structs/Tilemap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tilemap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
