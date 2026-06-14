#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_DEFINED)
#define IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_DEFINED
struct Transform__Array;
struct LaserShieldPieceProjectile_Ring {
    struct Transform__Array* Pieces;
};
#endif
#if !defined(IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_FWDDECL)
#define IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_FWDDECL
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_DEFINED) && !defined(IL2CPP_STRUCT_LaserShieldPieceProjectile_Ring_FWDDECL)
#include <Modloader/app/structs/LaserShieldPieceProjectile_Ring.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShieldPieceProjectile_Ring.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
