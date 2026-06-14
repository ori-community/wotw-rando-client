#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrail__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrail__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonTrail__StaticFields_DEFINED
struct Stack_1_Moon_MoonTrail_MoonTrailParticle_;
struct List_1_Moon_MoonTrail_;
struct MoonTrail__StaticFields {
    bool debug_enable;
    bool EnableJobification;
    int32_t PropertyIdMoonTrailParticles;
    int32_t PropertyIdMoonTrailTransformDelta;
    int32_t PropertyIdMoonTrailParameters1;
    int32_t PropertyIdMoonTrailParameters2;
    int32_t PropertyIdMoonTrailCameraPosition;
    struct Stack_1_Moon_MoonTrail_MoonTrailParticle_* s_particleBuffers;
    struct List_1_Moon_MoonTrail_* All;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTrail__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonTrail__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_MoonTrail_.h>
#include <Modloader/app/structs/Stack_1_Moon_MoonTrail_MoonTrailParticle_.h>
#endif
#undef IL2CPP_STRUCT_MoonTrail__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrail__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonTrail__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrail__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
