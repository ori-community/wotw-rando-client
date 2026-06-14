#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProjectileExplodeWall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProjectileExplodeWall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileExplodeWall__Fields_DEFINED)
#include <Modloader/app/structs/LegacyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ProjectileExplodeWall__Fields_DEFINED
struct SoundProvider;
struct ProjectileExplodeWall__Fields {
    struct LegacyEntity__Fields _;
    struct SoundProvider* Deflected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProjectileExplodeWall__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProjectileExplodeWall__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_ProjectileExplodeWall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileExplodeWall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProjectileExplodeWall__Fields_FWDDECL)
#include <Modloader/app/structs/ProjectileExplodeWall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProjectileExplodeWall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
