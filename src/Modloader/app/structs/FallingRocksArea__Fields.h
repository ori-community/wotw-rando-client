#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallingRocksArea__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallingRocksArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksArea__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_FallingRocksArea__Fields_DEFINED
struct FallingRocksArea__Fields {
    struct MonoBehaviour__Fields _;
    bool ShowGizmos;
    struct Bounds Bounds;
    bool Active;
    float Area;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallingRocksArea__Fields_FWDDECL)
#define IL2CPP_STRUCT_FallingRocksArea__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FallingRocksArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksArea__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FallingRocksArea__Fields_FWDDECL)
#include <Modloader/app/structs/FallingRocksArea__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallingRocksArea__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
