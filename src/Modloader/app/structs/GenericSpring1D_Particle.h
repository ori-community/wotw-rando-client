#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericSpring1D_Particle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericSpring1D_Particle_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericSpring1D_Particle_DEFINED)
#include <Modloader/app/structs/GenericSpring1D_Particle__Fields.h>
#if defined(IL2CPP_STRUCT_GenericSpring1D_Particle__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericSpring1D_Particle_DEFINED
struct GenericSpring1D_Particle__Class;
struct GenericSpring1D_Particle {
    struct GenericSpring1D_Particle__Class* klass;
    MonitorData* monitor;
    struct GenericSpring1D_Particle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericSpring1D_Particle_FWDDECL)
#define IL2CPP_STRUCT_GenericSpring1D_Particle_FWDDECL
#include <Modloader/app/structs/GenericSpring1D_Particle__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericSpring1D_Particle_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericSpring1D_Particle_DEFINED) && !defined(IL2CPP_STRUCT_GenericSpring1D_Particle_FWDDECL)
#include <Modloader/app/structs/GenericSpring1D_Particle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericSpring1D_Particle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
