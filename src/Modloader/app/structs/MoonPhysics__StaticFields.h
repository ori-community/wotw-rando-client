#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonPhysics__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonPhysics__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonPhysics__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonPhysics__StaticFields_DEFINED
struct MoonPhysics_AscendingDistanceComparer;
struct MoonPhysics__StaticFields {
    struct MoonPhysics_AscendingDistanceComparer* ascendDistance;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonPhysics__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonPhysics__StaticFields_FWDDECL
#include <Modloader/app/structs/MoonPhysics_AscendingDistanceComparer.h>
#endif
#undef IL2CPP_STRUCT_MoonPhysics__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonPhysics__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonPhysics__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonPhysics__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonPhysics__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
