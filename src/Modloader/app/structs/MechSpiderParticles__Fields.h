#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MechSpiderParticles__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MechSpiderParticles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderParticles__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MechSpiderParticles__Fields_DEFINED
struct MechSpiderController;
struct ParticleSystem;
struct MechSpiderParticles__Fields {
    struct MonoBehaviour__Fields _;
    struct MechSpiderController* mechSpiderController;
    struct ParticleSystem* particles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MechSpiderParticles__Fields_FWDDECL)
#define IL2CPP_STRUCT_MechSpiderParticles__Fields_FWDDECL
#include <Modloader/app/structs/MechSpiderController.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_MechSpiderParticles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderParticles__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MechSpiderParticles__Fields_FWDDECL)
#include <Modloader/app/structs/MechSpiderParticles__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MechSpiderParticles__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
