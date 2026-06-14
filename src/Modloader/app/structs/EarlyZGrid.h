#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyZGrid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyZGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZGrid_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3Int.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector3Int_DEFINED)
#define IL2CPP_STRUCT_EarlyZGrid_DEFINED
struct EarlyZGrid {
    struct Bounds bounds;
    struct Vector3 min;
    struct Vector3 size;
    struct Vector3 cellSize;
    struct Vector3Int count;
    int32_t cellCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EarlyZGrid_FWDDECL)
#define IL2CPP_STRUCT_EarlyZGrid_FWDDECL
#endif
#undef IL2CPP_STRUCT_EarlyZGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZGrid_DEFINED) && !defined(IL2CPP_STRUCT_EarlyZGrid_FWDDECL)
#include <Modloader/app/structs/EarlyZGrid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyZGrid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
